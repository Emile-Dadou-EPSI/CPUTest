//
//  Memory.hpp
//  CPU
//
//  Created by Emile Dadou on 08/10/2020.
//

#ifndef Memory_hpp
#define Memory_hpp

#include <stdio.h>

namespace CPU_4001 {
    typedef unsigned char byte;
    
    class Memory {
        public:
            // max address to read or write at
            const byte c_MaxAddress;
        
        private:
            byte* m_MemorySpace;
        
        public:
            // Construct for the memory class
            Memory();
            
            // delete memory class, releasing
            ~Memory();
        
            // Reset memory variables to 0
            void Clear();
            
            // Function to read the given address value
            const byte& Reade (const byte& p_Address);
            
            // Function to write the value to the given address
            void Write (const byte& p_Address, const byte& p_Value);
    };
}

#endif /* Memory_hpp */
