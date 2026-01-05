void func_001981f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001981f0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001981f8: addu.qb $zero, $sp, $s1
    a0 = 0x30;                                                  // 0x00198208: addiu $a0, $zero, 0x30
    func_0018dc30();  // 18dc30                                // 0x0019820c: jal 0x18dc30
    a1 = 0x10;                                                  // 0x00198210: addiu $a1, $zero, 0x10
    v1 = 0 | 0xf000;                                            // 0x00198214: ori $v1, $zero, 0xf000
    a0 = 0x1300 << 16;                                          // 0x00198218: lui $a0, 0x1300
    a2 = a1 | 2;                                                // 0x00198220: ori $a2, $a1, 2
    v1 = 0x5000 << 16;                                          // 0x00198224: lui $v1, 0x5000
    a1 = v1 | 2;                                                // 0x00198228: ori $a1, $v1, 2
    *(uint32_t*)((v0) + 8) = a0;                                // 0x00198230: sw $a0, 8($v0)
    v1 = 0x1000 << 16;                                          // 0x00198234: lui $v1, 0x1000
    *(uint32_t*)((v0) + 0xc) = a1;                              // 0x0019823c: sw $a1, 0xc($v0)
    v1 = 0 | 0x8001;                                            // 0x00198240: ori $v1, $zero, 0x8001
    a0 = v1 | a0;                                               // 0x00198244: or $a0, $v1, $a0
    v1 = 0xe;                                                   // 0x0019824c: addiu $v1, $zero, 0xe
    a0 = 1 << 16;                                               // 0x00198250: lui $a0, 1
    v1 = s1 & a0;                                               // 0x00198258: and $v1, $s1, $a0
    if (v1 != a0) goto label_0x19826c;                          // 0x0019825c: bne $v1, $a0, 0x19826c
    v1 = 0x60;                                                  // 0x00198260: addiu $v1, $zero, 0x60
    goto label_0x198270;                                        // 0x00198264: b 0x198270
label_0x19826c:
label_0x198270:
    if (s0 != 0) goto label_0x198284;                           // 0x00198270: bnez $s0, 0x198284
    v1 = 0x15;                                                  // 0x00198274: addiu $v1, $zero, 0x15
    v1 = 0x14;                                                  // 0x00198278: addiu $v1, $zero, 0x14
    goto label_0x198288;                                        // 0x0019827c: b 0x198288
label_0x198284:
label_0x198288:
    a3 = 0x29 << 16;                                            // 0x0019828c: lui $a3, 0x29
    func_0018ce40();  // 18ce40                                // 0x0019829c: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x001982a0: addiu $a3, $a3, -0x350
    v0 = 1;                                                     // 0x001982a8: addiu $v0, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001982ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001982b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001982b4: jr $ra
    sp = sp + 0x30;                                             // 0x001982b8: addiu $sp, $sp, 0x30
}