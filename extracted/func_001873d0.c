void func_001873d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x184;                                                 // 0x001873d0: addiu $v1, $zero, 0x184
    v0 = 0x21 << 16;                                            // 0x001873d4: lui $v0, 0x21
    v0 = v0 + 0x6018;                                           // 0x001873dc: addiu $v0, $v0, 0x6018
    a0 = a0 + v0;                                               // 0x001873e4: addu $a0, $a0, $v0
    a0 = a0 + 0xd0;                                             // 0x001873e8: addiu $a0, $a0, 0xd0
    /* nop */                                                   // 0x001873ec: nop 
    v0 = *(int32_t*)(a0);                                       // 0x001873f0: lw $v0, 0($a0)
    if (v0 != a1) return;  // Branch to 0x187404                // 0x001873f4: bne $v0, $a1, 0x187404
    v1 = v1 + 1;                                                // 0x001873f8: addiu $v1, $v1, 1
    return;                                                     // 0x001873fc: jr $ra
    v0 = 1;                                                     // 0x00187400: addiu $v0, $zero, 1
}