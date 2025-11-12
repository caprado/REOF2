void func_001b98e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_5c;
    
    return func_001ad530();  // Tail call                        // 0x001b98e0: j 0x1ad420
    /* nop */                                                   // 0x001b98e4: nop 
    /* nop */                                                   // 0x001b98e8: nop 
    /* nop */                                                   // 0x001b98ec: nop 
    sp = sp + -0x60;                                            // 0x001b98f0: addiu $sp, $sp, -0x60
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001b98f8: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b9904: addu.qb $zero, $sp, $s1
    if (s1 >= 0) goto label_0x1b9920;                           // 0x001b9910: bgez $s1, 0x1b9920
    goto label_0x1b9a1c;                                        // 0x001b9918: b 0x1b9a1c
    v0 = -1;                                                    // 0x001b991c: addiu $v0, $zero, -1
label_0x1b9920:
    v0 = *(uint8_t*)((s3) + 2);                                 // 0x001b9920: lbu $v0, 2($s3)
    if (v0 != 0) goto label_0x1b9930;                           // 0x001b9924: bnez $v0, 0x1b9930
    s0 = 4;                                                     // 0x001b9928: addiu $s0, $zero, 4
    s0 = *(uint8_t*)((s3) + 3);                                 // 0x001b992c: lbu $s0, 3($s3)
label_0x1b9930:
    v0 = 0x49 << 16;                                            // 0x001b9930: lui $v0, 0x49
    v0 = v0 + 0x1341;                                           // 0x001b9934: addiu $v0, $v0, 0x1341
    v0 = v0 + s0;                                               // 0x001b9938: addu $v0, $v0, $s0
    v0 = g_00491341;  // Global at 0x00491341                   // 0x001b993c: lbu $v0, 0($v0)
    if (v0 != 0) goto label_0x1b9950;                           // 0x001b9940: bnez $v0, 0x1b9950
    at = (s1 < 0xc8) ? 1 : 0;                                   // 0x001b9944: slti $at, $s1, 0xc8
    goto label_0x1b9a1c;                                        // 0x001b9948: b 0x1b9a1c
    v0 = -1;                                                    // 0x001b994c: addiu $v0, $zero, -1
label_0x1b9950:
    if (at != 0) goto label_0x1b995c;                           // 0x001b9950: bnez $at, 0x1b995c
    a0 = s2 + 1;                                                // 0x001b9954: addiu $a0, $s2, 1
label_0x1b995c:
    func_001addb0();  // 0x1adcc0                                // 0x001b995c: jal 0x1adcc0
    v1 = 1;                                                     // 0x001b9964: addiu $v1, $zero, 1
    if (v0 == v1) goto label_0x1b9978;                          // 0x001b9968: beq $v0, $v1, 0x1b9978
    v1 = 2;                                                     // 0x001b996c: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x1b9980;                          // 0x001b9970: bne $v0, $v1, 0x1b9980
    a2 = s0 + 5;                                                // 0x001b9974: addiu $a2, $s0, 5
label_0x1b9978:
    goto label_0x1b9a1c;                                        // 0x001b9978: b 0x1b9a1c
    v0 = -1;                                                    // 0x001b997c: addiu $v0, $zero, -1
label_0x1b9980:
    thunk_func_001ad420();  // 0x1b9800                          // 0x001b9984: jal 0x1b9800
    a0 = s2 + 1;                                                // 0x001b9988: addiu $a0, $s2, 1
    if (v0 != 0) goto label_0x1b9a18;                           // 0x001b998c: bnez $v0, 0x1b9a18
    at = 0x22 << 16;                                            // 0x001b9990: lui $at, 0x22
    a0 = s3 + 0x38;                                             // 0x001b9994: addiu $a0, $s3, 0x38
    a1 = g_0021c954;  // Global at 0x0021c954                   // 0x001b9998: lw $a1, -0x36ac($at)
    a2 = sp + 0x5c;                                             // 0x001b999c: addiu $a2, $sp, 0x5c
    func_001b8e30();  // 0x1b8c20                                // 0x001b99a0: jal 0x1b8c20
    a3 = sp + 0x58;                                             // 0x001b99a4: addiu $a3, $sp, 0x58
    if (v0 != 0) goto label_0x1b99c4;                           // 0x001b99a8: bnez $v0, 0x1b99c4
    at = 0x49 << 16;                                            // 0x001b99ac: lui $at, 0x49
    a0 = s2 + 1;                                                // 0x001b99b0: addiu $a0, $s2, 1
    func_001adab0();  // 0x1ad9c0                                // 0x001b99b4: jal 0x1ad9c0
    goto label_0x1b9a1c;                                        // 0x001b99bc: b 0x1b9a1c
label_0x1b99c4:
    v0 = 0x48 << 16;                                            // 0x001b99c4: lui $v0, 0x48
    a0 = g_004912bd;  // Global at 0x004912bd                   // 0x001b99c8: lbu $a0, 0x12bd($at)
    v0 = v0 + -0x40ee;                                          // 0x001b99cc: addiu $v0, $v0, -0x40ee
    a1 = *(uint16_t*)((s3) + 0x1e2);                            // 0x001b99d0: lhu $a1, 0x1e2($s3)
    v1 = a0 << 4;                                               // 0x001b99d4: sll $v1, $a0, 4
    v1 = v1 + a0;                                               // 0x001b99d8: addu $v1, $v1, $a0
    v1 = v1 << 8;                                               // 0x001b99dc: sll $v1, $v1, 8
    v0 = v0 + v1;                                               // 0x001b99e0: addu $v0, $v0, $v1
    v0 = g_0047bf12;  // Global at 0x0047bf12                   // 0x001b99e4: lhu $v0, 0($v0)
    if (a1 == v0) goto label_0x1b9a0c;                          // 0x001b99e8: beq $a1, $v0, 0x1b9a0c
    /* nop */                                                   // 0x001b99ec: nop 
    v1 = local_5c;                                              // 0x001b99f0: lw $v1, 0x5c($sp)
    v0 = 3;                                                     // 0x001b99f4: addiu $v0, $zero, 3
    /* divide: v1 / v0 -> hi:lo */                              // 0x001b99f8: div $zero, $v1, $v0
    /* nop */                                                   // 0x001b99fc: nop 
    /* nop */                                                   // 0x001b9a00: nop 
    /* mflo $v0 */                                              // 0x001b9a04
    local_5c = v0;                                              // 0x001b9a08: sw $v0, 0x5c($sp)
label_0x1b9a0c:
    a1 = local_5c;                                              // 0x001b9a0c: lw $a1, 0x5c($sp)
    func_001adab0();  // 0x1ad9c0                                // 0x001b9a10: jal 0x1ad9c0
    a0 = s2 + 1;                                                // 0x001b9a14: addiu $a0, $s2, 1
label_0x1b9a18:
label_0x1b9a1c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001b9a24: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b9a28: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9a2c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9a30: jr $ra
    sp = sp + 0x60;                                             // 0x001b9a34: addiu $sp, $sp, 0x60
}