void func_001860e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x2e0;                                           // 0x001860e0: addiu $sp, $sp, -0x2e0
    s1 = sp + 0x200;                                            // 0x001860f8: addiu $s1, $sp, 0x200
    func_001840a8();  // 0x184048                                // 0x00186108: jal 0x184048
    if (v0 != 0) goto label_0x1861e8;                           // 0x00186110: bnez $v0, 0x1861e8
    v0 = 0x23 << 16;                                            // 0x00186118: lui $v0, 0x23
    s4 = v0 + -0x6088;                                          // 0x00186120: addiu $s4, $v0, -0x6088
    func_0010ac68();  // 0x10ab20                                // 0x00186124: jal 0x10ab20
    if (v0 != 0) goto label_0x186154;                           // 0x0018612c: bnez $v0, 0x186154
    v0 = 0x898;                                                 // 0x00186130: addiu $v0, $zero, 0x898
    a0 = 0x27 << 16;                                            // 0x00186134: lui $a0, 0x27
    /* multiply: s2 * v0 -> hi:lo */                            // 0x00186138: mult $ac2, $s2, $v0
    a0 = a0 + 0x7ad0;                                           // 0x0018613c: addiu $a0, $a0, 0x7ad0
    func_0010ae00();  // 0x10ac68                                // 0x00186144: jal 0x10ac68
    a0 = v0 + a0;                                               // 0x00186148: addu $a0, $v0, $a0
    goto label_0x1861d0;                                        // 0x0018614c: b 0x1861d0
    /* nop */                                                   // 0x00186150: nop 
label_0x186154:
    func_00184048();  // 0x183fa0                                // 0x00186154: jal 0x183fa0
    if (v0 != 0) goto label_0x1861e8;                           // 0x0018615c: bnez $v0, 0x1861e8
    func_00184770();  // 0x184320                                // 0x00186174: jal 0x184320
    v1 = 0x8101 << 16;                                          // 0x0018617c: lui $v1, 0x8101
    v1 = v1 | 0x11;                                             // 0x00186180: ori $v1, $v1, 0x11
    if (v0 != v1) goto label_0x1861e8;                          // 0x00186184: bne $v0, $v1, 0x1861e8
    v0 = local_0;                                               // 0x0018618c: lhu $v0, 0($sp)
    v0 = v0 & 0x20;                                             // 0x00186190: andi $v0, $v0, 0x20
    if (v0 != 0) goto label_0x1861a8;                           // 0x00186194: bnez $v0, 0x1861a8
    s0 = 0x898;                                                 // 0x00186198: addiu $s0, $zero, 0x898
    v0 = 0x8101 << 16;                                          // 0x0018619c: lui $v0, 0x8101
    goto label_0x1861e8;                                        // 0x001861a0: b 0x1861e8
    v0 = v0 | 0x14;                                             // 0x001861a4: ori $v0, $v0, 0x14
label_0x1861a8:
    v0 = 0x27 << 16;                                            // 0x001861a8: lui $v0, 0x27
    v0 = v0 + 0x7ad0;                                           // 0x001861b0: addiu $v0, $v0, 0x7ad0
    s0 = s0 + v0;                                               // 0x001861b8: addu $s0, $s0, $v0
    func_0010ae00();  // 0x10ac68                                // 0x001861bc: jal 0x10ac68
    func_0010a990();  // 0x10a860                                // 0x001861c8: jal 0x10a860
label_0x1861d0:
    if (s3 == 0) goto label_0x1861e0;                           // 0x001861d0: beqz $s3, 0x1861e0
    func_0010ae00();  // 0x10ac68                                // 0x001861d8: jal 0x10ac68
label_0x1861e0:
label_0x1861e8:
    return;                                                     // 0x001861fc: jr $ra
    sp = sp + 0x2e0;                                            // 0x00186200: addiu $sp, $sp, 0x2e0
}