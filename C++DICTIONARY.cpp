#include <iostream>
#include <string>
using namespace std;

int main() {
    string search;
    cout << "Search for a word: ";
    getline(cin, search);

    if (search == "ABACUS") {
        cout << "Around 4000 years ago, the Chinese invented the Abacus, and it is believed to be the first computer. The history of computers begins with the birth of the abacus. Structure: Abacus is basically a wooden rack that has metal rods with beads mounted on them. Working of abacus: In the abacus, the beads were moved by the abacus operator according to some rules to perform arithmetic calculations. In some countries like China, Russia, and Japan, the abacus is still used by their people.";
    }
    else if (search == "NAPIER'S BONES") {
        cout << "It was a manually operated calculating device invented by John Napier. In this device, he used 9 different ivory strips (bones) marked with numbers to multiply and divide. It was also the first machine to use the decimal point system for calculation.";
    }
    else if (search == "STEPPED RECKONER OR LEIBNIZ WHEEL") {
        cout << "A German mathematician-philosopher Gottfried Wilhelm Leibniz in 1673 developed this device by improving Pascal's invention. It was basically a digital mechanical calculator, and it was called the stepped reckoner as it was made of fluted drums instead of gears.";
    }
    else if (search == "ANALYTICAL ENGINE") {
        cout << "In 1830, Charles Babbage developed the Analytical Engine. It was a mechanical computer that used punch cards as input. It was capable of performing mathematical problems and storing information permanently (storage).";
    }
    else if (search == "TABULATING MACHINE") {
        cout << "Herman Hollerith, an American statistician, invented this machine in 1890. It was a mechanical tabulator based on punch cards. It could tabulate statistics, record, and sort information. It was used by the US Census in 1890. Hollerith's company later became IBM in 1924.";
    }
    else if (search == "MARK 1") {
        cout << "In 1937, Howard Aiken planned to develop a machine for large calculations. In 1944, the Mark I computer was built in partnership between IBM and Harvard. It was the first programmable digital computer.";
    }
    else if (search == "FIRST GENERATION COMPUTERS") {
        cout << "From 1940 to 1956, these computers used vacuum tubes as basic components of CPU and memory. They were large, slow, and expensive. Batch operating systems and punch cards were used. Example: ENIAC, UNIVAC-1, EDVAC.";
    }
    else if (search == "SECOND GENERATION COMPUTERS") {
        cout << "From 1957 to 1963, computers used transistors. They were faster, cheaper, and smaller. Magnetic cores were used for primary memory. Languages like COBOL and FORTRAN were introduced. Examples: IBM 1620, IBM 7094.";
    }
    else if (search == "THIRD GENERATION COMPUTERS") {
        cout << "From 1964 to 1970, integrated circuits (ICs) replaced transistors. This made computers more reliable and efficient. Time-sharing and multiprogramming were introduced. Languages: FORTRAN II–IV, COBOL, PASCAL. Example: IBM-360 series.";
    }
    else if (search == "FOURTH GENERATION COMPUTERS") {
        cout << "From 1971 to 1990, VLSI (Very Large Scale Integration) chips were used, allowing millions of components on a single chip. Computers became faster, cheaper, and smaller. Languages like C and C++ were common. Example: PDP 11, CRAY-1.";
    }
    else if (search == "FIFTH GENERATION COMPUTERS") {
        cout << "From 1980 to the present, ULSI (Ultra Large Scale Integration) technology is used. Computers use AI, parallel processing, and languages like Java, C++, and .NET. Examples: desktops, laptops, ultrabooks.";
    }
    else if (search == "COMPUTER") {
        cout << "An electronic device that receives, stores, processes, and outputs data. It consists of hardware and software components and is used across various industries to perform a wide range of tasks.";
    }
    else if (search == "DIGITAL COMPUTERS") {
        cout << "Modern computers that process data in binary form (0s and 1s). Used in business, industry, and scientific applications.";
    }
    else if (search == "ANALOG COMPUTERS") {
        cout << "Used to process continuous data like temperature or voltage. Example: thermometer. Useful in simulations and real-time systems.";
    }
    else if (search == "HYBRID COMPUTERS") {
        cout << "Combine analog and digital technologies. Used in complex simulations and real-time processing.";
    }
    else if (search == "SUPERCOMPUTERS") {
        cout << "Extremely powerful computers used in scientific research, weather forecasting, and cryptography.";
    }
    else if (search == "MAINFRAME COMPUTERS") {
        cout << "Large systems used by organizations to handle massive data and support multiple users.";
    }
    else if (search == "MINI COMPUTERS") {
        cout << "Smaller than mainframes but still capable of handling multiple users and large data sets. Used in medium businesses.";
    }
    else if (search == "WORKSTATIONS") {
        cout << "High-performance computers used by professionals for tasks like 3D modeling and scientific analysis.";
    }
    else if (search == "EMBEDDED SYSTEM") {
        cout << "Computers built into other devices like cars or appliances to control specific functions.";
    }
    else if (search == "MOBILE DEVICES") {
        cout << "Portable computers like smartphones, tablets, and laptops.";
    }
    else if (search == "MICRO COMPUTERS") {
        cout << "Also known as personal computers (PCs), they use microprocessors and are used in various personal and professional applications.";
    }
    else if (search == "PERIPHERAL DEVICES") {
        cout << "External devices connected to a computer, used for input, output, and storage.";
    }
    else if (search == "RANDOM ACCESS MEMORY OR RAM") {
        cout << "RAM is an electronic device that is much faster than a hard disk and is used for temporary data storage.";
    }
    else if (search == "HARD DISK DRIVE OR HARD DISK") {
        cout << "An electromechanical device used for long-term data storage. Slower than RAM but non-volatile.";
    }
    else if (search == "VOLATILE") {
        cout << "Memory where contents are lost when the computer is turned off.";
    }
    else if (search == "NON-VOLATILE") {
        cout << "Memory where contents are preserved even when the computer is turned off.";
    }
    else {
        cout << "Word not found... Try again.";
    }

    return 0;
}
