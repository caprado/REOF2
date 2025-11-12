void func_00177170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00177170: addiu $sp, $sp, -0x10
    t0 = *(int32_t*)((v0) + 0x38);                              // 0x001771d8: lw $t0, 0x38($v0)
    *(uint32_t*)((a0) + 0x38) = t0;                             // 0x001771f8: sw $t0, 0x38($a0)
    goto label_0x177220;                                        // 0x00177200: j 0x177220
    sp = sp + 0x10;                                             // 0x00177204: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00177208: addiu $sp, $sp, -0x10
    a1 = 1;                                                     // 0x0017720c: addiu $a1, $zero, 1
    goto label_0x177220;                                        // 0x00177218: j 0x177220
    sp = sp + 0x10;                                             // 0x0017721c: addiu $sp, $sp, 0x10
label_0x177220:
    sp = sp + -0x20;                                            // 0x00177220: addiu $sp, $sp, -0x20
    s2 = a1 << 2;                                               // 0x0017723c: sll $s2, $a1, 2
    v0 = (s1 < 0xf) ? 1 : 0;                                    // 0x00177244: slti $v0, $s1, 0xf
label_0x177248:
    if (v0 == 0) goto label_0x177284;                           // 0x00177248: beqz $v0, 0x177284
    s1 = s1 + 1;                                                // 0x0017724c: addiu $s1, $s1, 1
    v0 = *(int32_t*)(s0);                                       // 0x00177250: lw $v0, 0($s0)
    s0 = s0 + 4;                                                // 0x00177254: addiu $s0, $s0, 4
    if (v0 == 0) goto label_0x177284;                           // 0x00177258: beqz $v0, 0x177284
    v1 = s2 + v0;                                               // 0x0017725c: addu $v1, $s2, $v0
    v0 = *(int32_t*)(v1);                                       // 0x00177260: lw $v0, 0($v1)
    /* call function at address in v0 */                        // 0x00177270: jalr $v0
    if (a0 == 0) goto label_0x177248;                           // 0x0017727c: beqz $a0, 0x177248
    v0 = (s1 < 0xf) ? 1 : 0;                                    // 0x00177280: slti $v0, $s1, 0xf
label_0x177284:
    return;                                                     // 0x00177298: jr $ra
    sp = sp + 0x20;                                             // 0x0017729c: addiu $sp, $sp, 0x20
}