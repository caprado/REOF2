void func_001a91f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001a91f0: addiu $sp, $sp, -0x40
    a1 = 0x2f;                                                  // 0x001a91f4: addiu $a1, $zero, 0x2f
    func_0010b460();  // 10b460                                // 0x001a9200: jal 0x10b460
    if (v0 != 0) goto label_0x1a9218;                           // 0x001a9208: bnez $v0, 0x1a9218
    func_0010b460();  // 10b460                                // 0x001a9210: jal 0x10b460
    a1 = 0x5c;                                                  // 0x001a9214: addiu $a1, $zero, 0x5c
label_0x1a9218:
    if (v0 == 0) goto label_0x1a9228;                           // 0x001a9218: beqz $v0, 0x1a9228
    /* nop */                                                   // 0x001a921c: nop 
    goto label_0x1a922c;                                        // 0x001a9220: b 0x1a922c
    v0 = v0 + 1;                                                // 0x001a9224: addiu $v0, $v0, 1
label_0x1a9228:
label_0x1a922c:
    func_0010ac68();  // 10ac68                                // 0x001a9230: jal 0x10ac68
    a0 = sp + 0x20;                                             // 0x001a9234: addiu $a0, $sp, 0x20
    func_0010ae00();  // 10ae00                                // 0x001a9238: jal 0x10ae00
    a0 = sp + 0x20;                                             // 0x001a923c: addiu $a0, $sp, 0x20
    if (v0 != 0) goto label_0x1a9250;                           // 0x001a9240: bnez $v0, 0x1a9250
    a0 = sp + 0x20;                                             // 0x001a9244: addiu $a0, $sp, 0x20
    goto label_0x1a92b4;                                        // 0x001a9248: b 0x1a92b4
    v0 = -1;                                                    // 0x001a924c: addiu $v0, $zero, -1
label_0x1a9250:
    func_0010ca50();  // 10ca50                                // 0x001a9250: jal 0x10ca50
    /* nop */                                                   // 0x001a9254: nop 
    a0 = sp + 0x20;                                             // 0x001a9258: addiu $a0, $sp, 0x20
    func_0010b460();  // 10b460                                // 0x001a925c: jal 0x10b460
    a1 = 0x2e;                                                  // 0x001a9260: addiu $a1, $zero, 0x2e
    if (v0 == 0) goto label_0x1a9274;                           // 0x001a9264: beqz $v0, 0x1a9274
    v1 = 0x5f;                                                  // 0x001a926c: addiu $v1, $zero, 0x5f
    g_002187b1 = v1;  // Global at 0x002187b1                   // 0x001a9270: sb $v1, 0($v0)
label_0x1a9274:
    goto label_0x1a9298;                                        // 0x001a9274: b 0x1a9298
    /* nop */                                                   // 0x001a9278: nop 
label_0x1a927c:
    func_0010ab20();  // 10ab20                                // 0x001a927c: jal 0x10ab20
    a0 = sp + 0x20;                                             // 0x001a9280: addiu $a0, $sp, 0x20
    if (v0 != 0) goto label_0x1a9294;                           // 0x001a9284: bnez $v0, 0x1a9294
    /* nop */                                                   // 0x001a9288: nop 
    goto label_0x1a92b4;                                        // 0x001a928c: b 0x1a92b4
label_0x1a9294:
    s0 = s0 + 1;                                                // 0x001a9294: addiu $s0, $s0, 1
label_0x1a9298:
    v0 = 0x22 << 16;                                            // 0x001a9298: lui $v0, 0x22
    v1 = s0 << 2;                                               // 0x001a929c: sll $v1, $s0, 2
    v0 = v0 + -0x7850;                                          // 0x001a92a0: addiu $v0, $v0, -0x7850
    v0 = v0 + v1;                                               // 0x001a92a4: addu $v0, $v0, $v1
    a1 = g_002187b0;  // Global at 0x002187b0                   // 0x001a92a8: lw $a1, 0($v0)
    if (a1 != 0) goto label_0x1a927c;                           // 0x001a92ac: bnez $a1, 0x1a927c
    v0 = -1;                                                    // 0x001a92b0: addiu $v0, $zero, -1
label_0x1a92b4:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a92b8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a92bc: jr $ra
    sp = sp + 0x40;                                             // 0x001a92c0: addiu $sp, $sp, 0x40
}