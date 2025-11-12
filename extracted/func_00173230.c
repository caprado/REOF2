void func_00173230() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x21 << 16;                                            // 0x00173230: lui $v0, 0x21
    a2 = v0 + 0x578c;                                           // 0x00173238: addiu $a2, $v0, 0x578c
    v1 = g_0021578c;  // Global at 0x0021578c                   // 0x0017323c: lw $v1, 0($a2)
    a2 = a2 + 4;                                                // 0x00173240: addiu $a2, $a2, 4
    a1 = a1 + 1;                                                // 0x00173248: addiu $a1, $a1, 1
    if (v1 == 0) goto label_0x173268;                           // 0x0017324c: beqz $v1, 0x173268
    a0 = (a1 < 8) ? 1 : 0;                                      // 0x00173250: slti $a0, $a1, 8
    /* nop */                                                   // 0x00173254: nop 
    /* nop */                                                   // 0x00173258: nop 
    /* bnezl $a0, 0x173240 */                                   // 0x0017325c: bnezl $a0, 0x173240
    v1 = g_00215790;  // Global at 0x00215790                   // 0x00173260: lw $v1, 0($a2)
    v0 = -1;                                                    // 0x00173264: addiu $v0, $zero, -1
label_0x173268:
    return;                                                     // 0x00173268: jr $ra
    /* nop */                                                   // 0x0017326c: nop 
}