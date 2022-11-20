#include <tbb/pipeline.h>

extern "C" {

#include "filter.h"
#include "log.h"
#include "pipeline.h"

int pipeline_tbb(image_dir_t* image_dir) {

auto etape1= tbb::make_filter< png, void>(tbb::filter::serial_in_order,
		[](ong) -> void
		{
            png_read_image(png, row_pointers);
		});

auto etape2= tbb::make_filter< image_dir_t, void>(tbb::filter::serial_in_order,
		[](image_dir_t* image_dir) -> void
		{
			std::cout << val << std::endl;
		});

auto etape3= tbb::make_filter< image_dir_t, void>(tbb::filter::serial_in_order,
		[](image_dir_t* image_dir) -> void
		{
			std::cout << val << std::endl;
		});

auto etape4= tbb::make_filter< image_dir_t, void>(tbb::filter::serial_in_order,
		[](image_dir_t* image_dir) -> void
		{
			std::cout << val << std::endl;
		});

auto etape5= tbb::make_filter< image_dir_t, void>(tbb::filter::serial_in_order,
		[](image_dir_t* image_dir) -> void
		{
			std::cout << val << std::endl;
		});

auto etape6= tbb::make_filter< image_dir_t, void>(tbb::filter::serial_in_order,
		[](image_dir_t* image_dir) -> void
		{
			std::cout << val << std::endl;
		});

auto filterChain = etape1 & etape2 & etape3 & etape4 & etape5 & etape6;
	tbb::parallel_pipeline(4, filterChain);

    LOG_ERROR("not_implemented");
    return -1;
}

} /* extern "C" */