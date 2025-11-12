void func_00132668() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00132668: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x132688;                           // 0x0013266c: bnez $a0, 0x132688
    a0 = 0x22 << 16;                                            // 0x00132674: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x00132678: jal 0x127d90
    a0 = &str_00223ae8;  // "E02080837 ADXT_GetNumSmplObuf: parameter error" // 0x0013267c: addiu $a0, $a0, 0x3ae8
    goto label_0x1326bc;                                        // 0x00132680: b 0x1326bc
    v0 = -1;                                                    // 0x00132684: addiu $v0, $zero, -1
label_0x132688:
    v1 = g_00223afc;  // Global at 0x00223afc                   // 0x00132688: lw $v1, 0x14($a0)
    if (v1 == 0) goto label_0x1326b8;                           // 0x0013268c: beqz $v1, 0x1326b8
    v1 = *(int32_t*)(v1);                                       // 0x00132694: lw $v1, 0($v1)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00132698: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x0013269c: jalr $v0
    a1 = 1;                                                     // 0x001326a0: addiu $a1, $zero, 1
    a0 = v0 + 0x7ff;                                            // 0x001326a4: addiu $a0, $v0, 0x7ff
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x001326a8: slti $v1, $v0, 0
    if (v1 != 0) v0 = a0;                                       // 0x001326ac: movn $v0, $a0, $v1
    goto label_0x1326bc;                                        // 0x001326b0: b 0x1326bc
    v0 = v0 >> 0xb;                                             // 0x001326b4: sra $v0, $v0, 0xb
label_0x1326b8:
label_0x1326bc:
    return;                                                     // 0x001326c0: jr $ra
    sp = sp + 0x10;                                             // 0x001326c4: addiu $sp, $sp, 0x10
}