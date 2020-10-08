//
//  Memory.cpp
//  CPU
//
//  Created by Emile Dadou on 08/10/2020.
//

#include "Memory.hpp"

namespace CPU_4001 {
    Memory::Memory():
        c_MaxAddress(255),
        m_MemorySpace(new byte[c_MaxAddress])
    {
        Clear();
        
    }

    Memory::~Memory(){
        if (m_MemorySpace != nullptr) {
            delete[] m_MemorySpace;
            m_MemorySpace = nullptr;
        }
    }

    void Memory::Clear() {
        for (byte i = 0; i < c_MaxAddress; i++) {
            m_MemorySpace[i] = 0;
        }
    }
}
