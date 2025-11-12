void func_0011c8f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011c8f0: addiu $sp, $sp, -0x10
    Deci2Call();  // 0x1146f0                                   // 0x0011c8f8: jal 0x1146f0
    a0 = 4;                                                     // 0x0011c8fc: addiu $a0, $zero, 4
    v1 = 1 << 16;                                               // 0x0011c900: lui $v1, 1
    v0 = v0 & v1;                                               // 0x0011c908: and $v0, $v0, $v1
    v0 = ((unsigned)0 < (unsigned)v0) ? 1 : 0;                  // 0x0011c90c: sltu $v0, $zero, $v0
    return;                                                     // 0x0011c910: jr $ra
    sp = sp + 0x10;                                             // 0x0011c914: addiu $sp, $sp, 0x10
}