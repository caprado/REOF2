void func_001682d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001682d0: addiu $sp, $sp, -0x30
    goto label_0x168320;                                        // 0x001682fc: b 0x168320
    s2 = *(int32_t*)((s4) + 0x10);                              // 0x00168300: lw $s2, 0x10($s4)
    /* nop */                                                   // 0x00168304: nop 
label_0x168308:
    s0 = s0 - s2;                                               // 0x00168308: subu $s0, $s0, $s2
    if (v1 == 0) goto label_0x168364;                           // 0x0016830c: beqz $v1, 0x168364
    s1 = s1 + s2;                                               // 0x00168310: addu $s1, $s1, $s2
    if (s0 <= 0) goto label_0x168368;                           // 0x00168314: blezl $s0, 0x168368
    s3 = s3 + 1;                                                // 0x0016831c: addiu $s3, $s3, 1
label_0x168320:
    func_00168d58();  // 168d58                                // 0x00168324: jal 0x168d58
    if (v0 == 0) goto label_0x168308;                           // 0x0016832c: beqz $v0, 0x168308
    v1 = (s3 < 3) ? 1 : 0;                                      // 0x00168330: slti $v1, $s3, 3
    v0 = 0x26 << 16;                                            // 0x00168334: lui $v0, 0x26
    s1 = v0 + 0x26f0;                                           // 0x0016833c: addiu $s1, $v0, 0x26f0
    func_00168388();  // 168388                                // 0x00168344: jal 0x168388
    v0 = g_002626f0;  // Global at 0x002626f0                   // 0x0016834c: lw $v0, 0($s1)
    if (v0 == 0) goto label_0x168368;                           // 0x00168350: beqz $v0, 0x168368
    v0 = g_002626fc;  // Global at 0x002626fc                   // 0x00168358: lw $v0, 0xc($s1)
    if (v0 > 0) goto label_0x168368;                            // 0x0016835c: bgtzl $v0, 0x168368
    *(uint32_t*)((s4) + 0x1c) = v0;                             // 0x00168360: sw $v0, 0x1c($s4)
label_0x168364:
label_0x168368:
    return;                                                     // 0x0016837c: jr $ra
    sp = sp + 0x30;                                             // 0x00168380: addiu $sp, $sp, 0x30
}