void func_001395e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_4;
    
    sp = sp + -0x50;                                            // 0x001395e8: addiu $sp, $sp, -0x50
    if (s0 != 0) goto label_0x139610;                           // 0x001395f8: bnez $s0, 0x139610
    a1 = 0x22 << 16;                                            // 0x00139600: lui $a1, 0x22
    goto label_0x13968c;                                        // 0x00139604: b 0x13968c
    a1 = &str_00225308;  // "DVCI: sceCdSearchFile failed. \\"  // 0x00139608: addiu $a1, $a1, 0x5308
    /* nop */                                                   // 0x0013960c: nop 
label_0x139610:
    func_0013a6c0();  // 13a6c0                                // 0x00139610: jal 0x13a6c0
    v1 = 0x20 << 16;                                            // 0x00139618: lui $v1, 0x20
    v0 = local_4;                                               // 0x0013961c: lw $v0, 4($sp)
    s1 = v1 + 0x3da0;                                           // 0x00139620: addiu $s1, $v1, 0x3da0
    if (v0 != 0) goto label_0x1396a4;                           // 0x00139628: bnez $v0, 0x1396a4
    func_00139f08();  // 139f08                                // 0x00139630: jal 0x139f08
    /* nop */                                                   // 0x00139634: nop 
    func_00137ec8();  // 137ec8                                // 0x00139638: jal 0x137ec8
    a0 = 0 | 0x8200;                                            // 0x0013963c: ori $a0, $zero, 0x8200
    func_00100d98();  // 100d98                                // 0x00139640: jal 0x100d98
    func_00137ec8();  // 137ec8                                // 0x00139648: jal 0x137ec8
    a0 = 0 | 0x8201;                                            // 0x0013964c: ori $a0, $zero, 0x8201
    func_001392e8();  // 1392e8                                // 0x00139654: jal 0x1392e8
    if (v0 != 0) goto label_0x1396a0;                           // 0x0013965c: bnez $v0, 0x1396a0
    a0 = 2;                                                     // 0x00139660: addiu $a0, $zero, 2
    v0 = 0x20 << 16;                                            // 0x00139664: lui $v0, 0x20
    v1 = g_00203ee8;  // Global at 0x00203ee8                   // 0x00139668: lw $v1, 0x3ee8($v0)
    if (v1 == a0) goto label_0x139680;                          // 0x0013966c: beq $v1, $a0, 0x139680
    a0 = 0x22 << 16;                                            // 0x00139670: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00139678: jal 0x116508
    a0 = &str_00225338;  // "E0092902:can't find file.(dvCiGetFileSize)" // 0x0013967c: addiu $a0, $a0, 0x5338
label_0x139680:
    a1 = 0x22 << 16;                                            // 0x00139680: lui $a1, 0x22
    a1 = &str_00225360;  // "E0092908:fname is null.(dvCiOpen)" // 0x00139688: addiu $a1, $a1, 0x5360
label_0x13968c:
    func_001392b8();  // 1392b8                                // 0x0013968c: jal 0x1392b8
    /* nop */                                                   // 0x00139690: nop 
    goto label_0x1396a4;                                        // 0x00139694: b 0x1396a4
    /* nop */                                                   // 0x0013969c: nop 
label_0x1396a0:
    v0 = local_4;                                               // 0x001396a0: lw $v0, 4($sp)
label_0x1396a4:
    return;                                                     // 0x001396b0: jr $ra
    sp = sp + 0x50;                                             // 0x001396b4: addiu $sp, $sp, 0x50
}