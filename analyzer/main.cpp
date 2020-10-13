#include <iostream>
#include "view/IIO.h"
#include "controller/dna_analyzer.h"
//
//
//void test_CLI()
//{
//	CLI ioDevice;
//	IIO* iio;
//	iio = &ioDevice;
//
//	std::string command = iio -> getInput();
//	std::cout << command << std::endl;
//	std::string s = "ftttttttt";
//	iio -> printOutput(s);
//}

int main()
{
    register_prototypes();
	CLI ioDevice;
	IIO* iio;
	iio = &ioDevice;
	DnaAnalyzerProject dnaAnalyzerProject(iio);
	dnaAnalyzerProject.run();

	//CLI
	//Data data;
	//test_CLI();
	//DnaAnalyzerProject d(data);
	//DnaAnalyzerProject(files *, Data)

    return 0;
}
