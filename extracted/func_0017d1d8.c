void func_0017d1d8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (unsigned)a1 >> 0x1f;                                  // 0x0017d1d8: srl $v0, $a1, 0x1f
    v0 = v0 + a1;                                               // 0x0017d1dc: addu $v0, $v0, $a1
    v0 = v0 >> 1;                                               // 0x0017d1e0: sra $v0, $v0, 1
    v0 = v0 << 1;                                               // 0x0017d1e4: sll $v0, $v0, 1
    v1 = v0 >> 1;                                               // 0x0017d1e8: sra $v1, $v0, 1
    *(uint32_t*)((a0) + 0xc) = v0;                              // 0x0017d1ec: sw $v0, 0xc($a0)
    *(uint32_t*)((a0) + 0x2c) = v1;                             // 0x0017d1f0: sw $v1, 0x2c($a0)
    return;                                                     // 0x0017d1f4: jr $ra
    *(uint32_t*)((a0) + 0x1c) = v1;                             // 0x0017d1f8: sw $v1, 0x1c($a0)
}