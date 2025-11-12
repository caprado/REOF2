void func_00193c50() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a1 = a1 + 0x10;                                             // 0x00193c50: addiu $a1, $a1, 0x10
    v1 = a2 << 6;                                               // 0x00193c54: sll $v1, $a2, 6
    a1 = a1 + v1;                                               // 0x00193c58: addu $a1, $a1, $v1
    v0 = 1;                                                     // 0x00193c5c: addiu $v0, $zero, 1
    v1 = *(int16_t*)((a1) + 0xa);                               // 0x00193c60: lh $v1, 0xa($a1)
    *(uint32_t*)((a0) + 0x174) = v1;                            // 0x00193c64: sw $v1, 0x174($a0)
    v1 = *(int16_t*)(a1);                                       // 0x00193c68: lh $v1, 0($a1)
    *(uint16_t*)((a0) + 0xc4) = v1;                             // 0x00193c6c: sh $v1, 0xc4($a0)
    v1 = *(uint16_t*)((a1) + 2);                                // 0x00193c70: lhu $v1, 2($a1)
    *(uint16_t*)((a0) + 0xc6) = v1;                             // 0x00193c74: sh $v1, 0xc6($a0)
    v1 = *(int16_t*)((a1) + 6);                                 // 0x00193c78: lh $v1, 6($a1)
    *(uint16_t*)((a0) + 0x182) = v1;                            // 0x00193c7c: sh $v1, 0x182($a0)
    v1 = *(int16_t*)((a1) + 8);                                 // 0x00193c80: lh $v1, 8($a1)
    *(uint16_t*)((a0) + 0x180) = v1;                            // 0x00193c84: sh $v1, 0x180($a0)
    FPU_F0 = *(float*)((a1) + 0x10);  // Load float             // 0x00193c88: lwc1 $f0, 0x10($a1)
    *(float*)((a0) + 0xdc) = FPU_F0;  // Store float            // 0x00193c8c: swc1 $f0, 0xdc($a0)
    *(float*)((a0) + 0x104) = FPU_F0;  // Store float           // 0x00193c90: swc1 $f0, 0x104($a0)
    FPU_F0 = *(float*)((a1) + 0x14);  // Load float             // 0x00193c94: lwc1 $f0, 0x14($a1)
    *(float*)((a0) + 0xe0) = FPU_F0;  // Store float            // 0x00193c98: swc1 $f0, 0xe0($a0)
    *(float*)((a0) + 0x108) = FPU_F0;  // Store float           // 0x00193c9c: swc1 $f0, 0x108($a0)
    FPU_F0 = *(float*)((a1) + 0x18);  // Load float             // 0x00193ca0: lwc1 $f0, 0x18($a1)
    *(float*)((a0) + 0xe4) = FPU_F0;  // Store float            // 0x00193ca4: swc1 $f0, 0xe4($a0)
    *(float*)((a0) + 0x10c) = FPU_F0;  // Store float           // 0x00193ca8: swc1 $f0, 0x10c($a0)
    FPU_F0 = *(float*)((a1) + 0x20);  // Load float             // 0x00193cac: lwc1 $f0, 0x20($a1)
    *(float*)((a0) + 0xe8) = FPU_F0;  // Store float            // 0x00193cb0: swc1 $f0, 0xe8($a0)
    *(float*)((a0) + 0x110) = FPU_F0;  // Store float           // 0x00193cb4: swc1 $f0, 0x110($a0)
    FPU_F0 = *(float*)((a1) + 0x24);  // Load float             // 0x00193cb8: lwc1 $f0, 0x24($a1)
    *(float*)((a0) + 0xec) = FPU_F0;  // Store float            // 0x00193cbc: swc1 $f0, 0xec($a0)
    *(float*)((a0) + 0x114) = FPU_F0;  // Store float           // 0x00193cc0: swc1 $f0, 0x114($a0)
    FPU_F0 = *(float*)((a1) + 0x28);  // Load float             // 0x00193cc4: lwc1 $f0, 0x28($a1)
    *(float*)((a0) + 0xf0) = FPU_F0;  // Store float            // 0x00193cc8: swc1 $f0, 0xf0($a0)
    *(float*)((a0) + 0x118) = FPU_F0;  // Store float           // 0x00193ccc: swc1 $f0, 0x118($a0)
    FPU_F0 = *(float*)((a1) + 0x30);  // Load float             // 0x00193cd0: lwc1 $f0, 0x30($a1)
    *(float*)((a0) + 0xf4) = FPU_F0;  // Store float            // 0x00193cd4: swc1 $f0, 0xf4($a0)
    *(float*)((a0) + 0x11c) = FPU_F0;  // Store float           // 0x00193cd8: swc1 $f0, 0x11c($a0)
    FPU_F0 = *(float*)((a1) + 0x34);  // Load float             // 0x00193cdc: lwc1 $f0, 0x34($a1)
    *(float*)((a0) + 0xf8) = FPU_F0;  // Store float            // 0x00193ce0: swc1 $f0, 0xf8($a0)
    *(float*)((a0) + 0x120) = FPU_F0;  // Store float           // 0x00193ce4: swc1 $f0, 0x120($a0)
    FPU_F0 = *(float*)((a1) + 0x38);  // Load float             // 0x00193ce8: lwc1 $f0, 0x38($a1)
    *(float*)((a0) + 0xfc) = FPU_F0;  // Store float            // 0x00193cec: swc1 $f0, 0xfc($a0)
    *(float*)((a0) + 0x124) = FPU_F0;  // Store float           // 0x00193cf0: swc1 $f0, 0x124($a0)
    *(uint32_t*)((a0) + 0xd8) = 0;                              // 0x00193cf4: sw $zero, 0xd8($a0)
    return;                                                     // 0x00193cf8: jr $ra
    *(uint32_t*)((a0) + 0xd4) = 0;                              // 0x00193cfc: sw $zero, 0xd4($a0)
}