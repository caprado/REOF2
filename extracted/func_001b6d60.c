void func_001b6d60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b6d60: addiu $sp, $sp, -0x20
    a3 = 0x29 << 16;                                            // 0x001b6d6c: lui $a3, 0x29
    v0 = 0xf000 << 16;                                          // 0x001b6d74: lui $v0, 0xf000
    *(uint32_t*)(a0) = v0;                                      // 0x001b6d78: sw $v0, 0($a0)
    *(uint32_t*)((a0) + 4) = 0;                                 // 0x001b6d80: sw $zero, 4($a0)
    *(uint32_t*)((a0) + 8) = 0;                                 // 0x001b6d88: sw $zero, 8($a0)
    *(uint32_t*)((a0) + 0xc) = 0;                               // 0x001b6d90: sw $zero, 0xc($a0)
    a3 = a3 + -0x350;                                           // 0x001b6d94: addiu $a3, $a3, -0x350
    func_0018cff0();  // 0x18ce40                                // 0x001b6d98: jal 0x18ce40
    v0 = s0 + 0x10;                                             // 0x001b6da0: addiu $v0, $s0, 0x10
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b6da8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b6dac: jr $ra
    sp = sp + 0x20;                                             // 0x001b6db0: addiu $sp, $sp, 0x20
}