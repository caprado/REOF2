void func_001cb5c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x420;                                           // 0x001cb5c0: addiu $sp, $sp, -0x420
    a0 = sp + 0x20;                                             // 0x001cb5d0: addiu $a0, $sp, 0x20
    func_001cb610();  // 1cb610                                // 0x001cb5d4: jal 0x1cb610
    a1 = *(uint8_t*)((s0) + 8);                                 // 0x001cb5dc: lbu $a1, 8($s0)
    func_001cb6d0();  // 1cb6d0                                // 0x001cb5e0: jal 0x1cb6d0
    a0 = sp + 0x20;                                             // 0x001cb5e4: addiu $a0, $sp, 0x20
    func_001cb640();  // 1cb640                                // 0x001cb5ec: jal 0x1cb640
    a1 = sp + 0x20;                                             // 0x001cb5f0: addiu $a1, $sp, 0x20
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cb5f8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cb5fc: jr $ra
    sp = sp + 0x420;                                            // 0x001cb600: addiu $sp, $sp, 0x420
}