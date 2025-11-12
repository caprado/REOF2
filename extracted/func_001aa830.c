void func_001aa830() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_194, local_1a4;
    
    sp = sp + -0x1b0;                                           // 0x001aa830: addiu $sp, $sp, -0x1b0
    v1 = -1;                                                    // 0x001aa834: addiu $v1, $zero, -1
    /* FPU: subu.qb $zero, $sp, $s5 */                          // 0x001aa840: subu.qb $zero, $sp, $s5
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001aa850: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001aa860: addu.qb $zero, $sp, $s1
    if (s3 == v1) goto label_0x1aa930;                          // 0x001aa86c: beq $s3, $v1, 0x1aa930
    at = 0x31 << 16;                                            // 0x001aa874: lui $at, 0x31
    s0 = g_003137fc;  // Global at 0x003137fc                   // 0x001aa87c: lw $s0, 0x37fc($at)
    a1 = 0x23 << 16;                                            // 0x001aa880: lui $a1, 0x23
    a2 = 0x23 << 16;                                            // 0x001aa884: lui $a2, 0x23
    a0 = sp + 0x80;                                             // 0x001aa888: addiu $a0, $sp, 0x80
    a1 = &str_002358f8;  // "adxsnd.afs"                        // 0x001aa88c: addiu $a1, $a1, 0x58f8
    func_0010a570();  // 0x10a4d8                                // 0x001aa890: jal 0x10a4d8
    a2 = &str_00235880;  // "%sNPC\\N%02d.NBD"                  // 0x001aa894: addiu $a2, $a2, 0x5880
    a0 = sp + 0x80;                                             // 0x001aa898: addiu $a0, $sp, 0x80
    func_001a9bf0();  // 0x1a9bd0                                // 0x001aa89c: jal 0x1a9bd0
    if (v0 <= 0) goto label_0x1aa930;                           // 0x001aa8a4: blez $v0, 0x1aa930
    a0 = sp + 0x180;                                            // 0x001aa8a8: addiu $a0, $sp, 0x180
    func_00107b68();  // 0x107ab8                                // 0x001aa8b0: jal 0x107ab8
    a2 = 0x30;                                                  // 0x001aa8b4: addiu $a2, $zero, 0x30
    func_001d3c30();  // 0x1d3c20                                // 0x001aa8b8: jal 0x1d3c20
    v1 = s2 & 0x7f;                                             // 0x001aa8c0: andi $v1, $s2, 0x7f
    at = (v1 < 2) ? 1 : 0;                                      // 0x001aa8c4: slti $at, $v1, 2
    if (at == 0) goto label_0x1aa8e0;                           // 0x001aa8c8: beqz $at, 0x1aa8e0
    /* nop */                                                   // 0x001aa8cc: nop 
    if (s1 != 0) goto label_0x1aa908;                           // 0x001aa8d0: bnez $s1, 0x1aa908
    /* nop */                                                   // 0x001aa8d4: nop 
    goto label_0x1aa934;                                        // 0x001aa8d8: b 0x1aa934
label_0x1aa8e0:
    v1 = local_194;                                             // 0x001aa8e0: lw $v1, 0x194($sp)
    if (v1 == 0) goto label_0x1aa930;                           // 0x001aa8e4: beqz $v1, 0x1aa930
    a2 = s0 + v1;                                               // 0x001aa8e8: addu $a2, $s0, $v1
    func_001d6250();  // 0x1d61c0                                // 0x001aa8f8: jal 0x1d61c0
    func_0018db40();  // 0x18db10                                // 0x001aa900: jal 0x18db10
    /* nop */                                                   // 0x001aa904: nop 
label_0x1aa908:
    if (s1 == 0) goto label_0x1aa930;                           // 0x001aa908: beqz $s1, 0x1aa930
    v1 = s2 & 0x80;                                             // 0x001aa90c: andi $v1, $s2, 0x80
    if (v1 != 0) goto label_0x1aa930;                           // 0x001aa910: bnez $v1, 0x1aa930
    /* nop */                                                   // 0x001aa914: nop 
    v1 = local_1a4;                                             // 0x001aa918: lw $v1, 0x1a4($sp)
    if (v1 == 0) goto label_0x1aa930;                           // 0x001aa91c: beqz $v1, 0x1aa930
    a2 = s0 + v1;                                               // 0x001aa920: addu $a2, $s0, $v1
    func_001d4db0();  // 0x1d4c80                                // 0x001aa928: jal 0x1d4c80
label_0x1aa930:
label_0x1aa934:
    /* FPU: ld.b $w1, -0x4a($zero) */                           // 0x001aa934: ld.b $w1, -0x4a($zero)
    /* FPU: aver_u.h $w1, $w0, $w21 */                          // 0x001aa938: aver_u.h $w1, $w0, $w21
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001aa93c: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001aa944: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001aa948: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001aa94c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001aa950: jr $ra
    sp = sp + 0x1b0;                                            // 0x001aa954: addiu $sp, $sp, 0x1b0
}