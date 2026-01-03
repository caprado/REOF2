void func_0013a270() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_30, local_31, local_32, local_33, local_44;
    
    sp = sp + -0x80;                                            // 0x0013a270: addiu $sp, $sp, -0x80
    v1 = 0x22 << 16;                                            // 0x0013a274: lui $v1, 0x22
    v0 = sp + 0x40;                                             // 0x0013a28c: addiu $v0, $sp, 0x40
    a1 = v1 + 0x5500;                                           // 0x0013a294: addiu $a1, $v1, 0x5500
    /* lwl $v1, 3($s1) */                                       // 0x0013a2a0: lwl $v1, 3($s1)
    /* lwr $v1, 0($s1) */                                       // 0x0013a2a4: lwr $v1, 0($s1)
    a2 = *(int8_t*)((s1) + 4);                                  // 0x0013a2a8: lb $a2, 4($s1)
    /* swl $v1, 3($v0) */                                       // 0x0013a2ac: swl $v1, 3($v0)
    /* swr $v1, 0($v0) */                                       // 0x0013a2b0: swr $v1, 0($v0)
    *(uint8_t*)((v0) + 4) = a2;                                 // 0x0013a2b4: sb $a2, 4($v0)
    func_0010a788();  // 10a788                                // 0x0013a2b8: jal 0x10a788
    local_44 = 0;                                               // 0x0013a2bc: sb $zero, 0x44($sp)
    /* bnezl $v0, 0x13a2e0 */                                   // 0x0013a2c0: bnezl $v0, 0x13a2e0
    s3 = 0x20 << 16;                                            // 0x0013a2c4: lui $s3, 0x20
    a0 = s1 + 4;                                                // 0x0013a2c8: addiu $a0, $s1, 4
    func_0013bf00();  // 13bf00                                // 0x0013a2cc: jal 0x13bf00
    goto label_0x13a3e0;                                        // 0x0013a2d4: b 0x13a3e0
    /* nop */                                                   // 0x0013a2dc: nop 
    a2 = 0x80;                                                  // 0x0013a2e0: addiu $a2, $zero, 0x80
    s0 = s3 + 0x3ff8;                                           // 0x0013a2e4: addiu $s0, $s3, 0x3ff8
    func_00107c70();  // 107c70                                // 0x0013a2ec: jal 0x107c70
    func_00139f08();  // 139f08                                // 0x0013a2fc: jal 0x139f08
    s0 = 1;                                                     // 0x0013a300: addiu $s0, $zero, 1
    func_00137ec8();  // 137ec8                                // 0x0013a304: jal 0x137ec8
    a0 = 0 | 0x9000;                                            // 0x0013a308: ori $a0, $zero, 0x9000
    /* nop */                                                   // 0x0013a30c: nop 
label_0x13a310:
    func_00100d98();  // 100d98                                // 0x0013a310: jal 0x100d98
    a0 = 1;                                                     // 0x0013a314: addiu $a0, $zero, 1
    if (v0 == s0) goto label_0x13a310;                          // 0x0013a318: beq $v0, $s0, 0x13a310
    /* nop */                                                   // 0x0013a31c: nop 
    func_00137ec8();  // 137ec8                                // 0x0013a320: jal 0x137ec8
    a0 = 0 | 0x9001;                                            // 0x0013a324: ori $a0, $zero, 0x9001
    func_00137ec8();  // 137ec8                                // 0x0013a328: jal 0x137ec8
    a0 = 0 | 0x9100;                                            // 0x0013a32c: ori $a0, $zero, 0x9100
    a1 = s3 + 0x3ff8;                                           // 0x0013a330: addiu $a1, $s3, 0x3ff8
    func_001392e8();  // 1392e8                                // 0x0013a334: jal 0x1392e8
    if (v0 != 0) goto label_0x13a350;                           // 0x0013a33c: bnez $v0, 0x13a350
    /* nop */                                                   // 0x0013a340: nop 
    goto label_0x13a394;                                        // 0x0013a344: b 0x13a394
    a0 = 0 | 0x9101;                                            // 0x0013a348: ori $a0, $zero, 0x9101
    /* nop */                                                   // 0x0013a34c: nop 
label_0x13a350:
    func_00137ec8();  // 137ec8                                // 0x0013a350: jal 0x137ec8
    a0 = 0 | 0x9102;                                            // 0x0013a354: ori $a0, $zero, 0x9102
    v0 = 1;                                                     // 0x0013a358: addiu $v0, $zero, 1
    a0 = 0 | 0x9200;                                            // 0x0013a35c: ori $a0, $zero, 0x9200
    local_31 = v0;                                              // 0x0013a360: sb $v0, 0x31($sp)
    local_30 = 0;                                               // 0x0013a364: sb $zero, 0x30($sp)
    local_32 = 0;                                               // 0x0013a368: sb $zero, 0x32($sp)
    func_00137ec8();  // 137ec8                                // 0x0013a36c: jal 0x137ec8
    local_33 = 0;                                               // 0x0013a370: sb $zero, 0x33($sp)
    a0 = local_0;                                               // 0x0013a374: lw $a0, 0($sp)
    a3 = sp + 0x30;                                             // 0x0013a378: addiu $a3, $sp, 0x30
    func_001017a8();  // 1017a8                                // 0x0013a380: jal 0x1017a8
    a1 = 2;                                                     // 0x0013a384: addiu $a1, $zero, 2
    if (v0 != 0) goto label_0x13a3a8;                           // 0x0013a388: bnez $v0, 0x13a3a8
    /* nop */                                                   // 0x0013a38c: nop 
    a0 = 0 | 0x9201;                                            // 0x0013a390: ori $a0, $zero, 0x9201
label_0x13a394:
    func_00137ec8();  // 137ec8                                // 0x0013a394: jal 0x137ec8
    /* nop */                                                   // 0x0013a398: nop 
    goto label_0x13a3dc;                                        // 0x0013a39c: b 0x13a3dc
    /* nop */                                                   // 0x0013a3a4: nop 
label_0x13a3a8:
    func_00137ec8();  // 137ec8                                // 0x0013a3a8: jal 0x137ec8
    a0 = 0 | 0x9202;                                            // 0x0013a3ac: ori $a0, $zero, 0x9202
    func_00137ec8();  // 137ec8                                // 0x0013a3b0: jal 0x137ec8
    a0 = 0 | 0x9300;                                            // 0x0013a3b4: ori $a0, $zero, 0x9300
    s0 = 1;                                                     // 0x0013a3b8: addiu $s0, $zero, 1
    /* nop */                                                   // 0x0013a3bc: nop 
label_0x13a3c0:
    func_00100d98();  // 100d98                                // 0x0013a3c0: jal 0x100d98
    a0 = 1;                                                     // 0x0013a3c4: addiu $a0, $zero, 1
    if (v0 == s0) goto label_0x13a3c0;                          // 0x0013a3c8: beq $v0, $s0, 0x13a3c0
    /* nop */                                                   // 0x0013a3cc: nop 
    func_00137ec8();  // 137ec8                                // 0x0013a3d0: jal 0x137ec8
    a0 = 0 | 0x9301;                                            // 0x0013a3d4: ori $a0, $zero, 0x9301
    v0 = 1;                                                     // 0x0013a3d8: addiu $v0, $zero, 1
label_0x13a3dc:
label_0x13a3e0:
    return;                                                     // 0x0013a3f0: jr $ra
    sp = sp + 0x80;                                             // 0x0013a3f4: addiu $sp, $sp, 0x80
}