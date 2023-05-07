#ifndef FILTER_H_
#define FILTER_H_
#include <systemc>
using namespace sc_core;

#ifndef NATIVE_SYSTEMC
#include <cynw_p2p.h>
#endif

#include "filter_def.h"

class Filter: public sc_module
{
public:
	sc_in_clk i_clk;
	sc_in < bool >  i_rst;
#ifndef NATIVE_SYSTEMC
	cynw_p2p< sc_dt::sc_uint<25> >::in i_rgb;
	cynw_p2p< sc_dt::sc_uint<24> >::out o_result;
#else
	sc_fifo_in< sc_dt::sc_uint<25> > i_rgb;
	sc_fifo_out< sc_dt::sc_uint<24> > o_result;
#endif

	SC_HAS_PROCESS( Filter );
	Filter( sc_module_name n );
	~Filter();
private:
	void do_filter();
	unsigned char data_buffer [3][6];
	unsigned char box[3][9];
	unsigned char center[3];
	unsigned int result[3];
	//unsigned char color[3];
};
#endif
