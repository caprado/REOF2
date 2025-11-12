void func_0017a1a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + -1;                                               // 0x0017a1a8: addiu $a0, $a0, -1
    v0 = ((unsigned)a0 < (unsigned)8) ? 1 : 0;                  // 0x0017a1ac: sltiu $v0, $a0, 8
    if (v0 == 0) return;  // Branch to 0x17a210                 // 0x0017a1b0: beqz $v0, 0x17a210
    /* nop */                                                   // 0x0017a1b4: nop 
    v0 = a0 << 2;                                               // 0x0017a1b8: sll $v0, $a0, 2
    v1 = 0x23 << 16;                                            // 0x0017a1bc: lui $v1, 0x23
    v1 = v1 + v0;                                               // 0x0017a1c0: addu $v1, $v1, $v0
    v1 = g_00229690;  // Global at 0x00229690                   // 0x0017a1c4: lw $v1, -0x6970($v1)
    /* jump to address in v1 */                                 // 0x0017a1c8: jr $v1
    /* nop */                                                   // 0x0017a1cc: nop 
    return;                                                     // 0x0017a1d0: jr $ra
    v0 = 0x5da8;                                                // 0x0017a1d4: addiu $v0, $zero, 0x5da8
}