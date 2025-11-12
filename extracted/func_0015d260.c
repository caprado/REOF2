void func_0015d260() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0015d260: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s1) + 0x168);                             // 0x0015d274: lw $v0, 0x168($s1)
    v0 = (v0 < 0x20) ? 1 : 0;                                   // 0x0015d278: slti $v0, $v0, 0x20
    if (v0 != 0) goto label_0x15d298;                           // 0x0015d27c: bnez $v0, 0x15d298
    a0 = 0x22 << 16;                                            // 0x0015d284: lui $a0, 0x22
    func_001634a8();  // 0x163410                                // 0x0015d288: jal 0x163410
    a0 = &str_00227448;  // "E1122629: mwPlySetFrmSync: handle is invalid." // 0x0015d28c: addiu $a0, $a0, 0x7448
    goto label_0x15d2ec;                                        // 0x0015d290: b 0x15d2ec
label_0x15d298:
    if (v1 < 0) goto label_0x15d2ec;                            // 0x0015d298: bltz $v1, 0x15d2ec
    v0 = *(int32_t*)((s1) + 0x158);                             // 0x0015d2a0: lw $v0, 0x158($s1)
    if (v0 == 0) goto label_0x15d2c0;                           // 0x0015d2a4: beqz $v0, 0x15d2c0
    /* nop */                                                   // 0x0015d2a8: nop 
    func_0015d338();  // 0x15d300                                // 0x0015d2ac: jal 0x15d300
    /* nop */                                                   // 0x0015d2b0: nop 
    goto label_0x15d2cc;                                        // 0x0015d2b4: b 0x15d2cc
    /* nop */                                                   // 0x0015d2bc: nop 
label_0x15d2c0:
    func_0015d370();  // 0x15d338                                // 0x0015d2c0: jal 0x15d338
label_0x15d2cc:
    if (s0 == 0) goto label_0x15d2e8;                           // 0x0015d2cc: beqz $s0, 0x15d2e8
    v0 = *(int32_t*)((s1) + 0x168);                             // 0x0015d2d4: lw $v0, 0x168($s1)
    v0 = v0 << 2;                                               // 0x0015d2d8: sll $v0, $v0, 2
    v0 = v0 + s1;                                               // 0x0015d2dc: addu $v0, $v0, $s1
    func_0015d480();  // 0x15d460                                // 0x0015d2e0: jal 0x15d460
    *(uint32_t*)((v0) + 0x16c) = s0;                            // 0x0015d2e4: sw $s0, 0x16c($v0)
label_0x15d2e8:
label_0x15d2ec:
    return;                                                     // 0x0015d2f8: jr $ra
    sp = sp + 0x20;                                             // 0x0015d2fc: addiu $sp, $sp, 0x20
}