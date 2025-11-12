void func_00147e30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00147e30: addiu $sp, $sp, -0x50
    s2 = 1;                                                     // 0x00147e44: addiu $s2, $zero, 1
    s0 = *(int32_t*)((s1) + 0x40);                              // 0x00147e54: lw $s0, 0x40($s1)
    a2 = *(int32_t*)((s0) + 0xf0);                              // 0x00147e58: lw $a2, 0xf0($s0)
    v0 = a2 & 0x3f;                                             // 0x00147e5c: andi $v0, $a2, 0x3f
    if (v0 == 0) goto label_0x147e80;                           // 0x00147e60: beqz $v0, 0x147e80
    *(uint32_t*)(s0) = 0;                                       // 0x00147e64: sw $zero, 0($s0)
    a1 = 0x22 << 16;                                            // 0x00147e68: lui $a1, 0x22
    func_00148530();  // 0x1484f8                                // 0x00147e70: jal 0x1484f8
    a1 = &str_002268d8;  // "Need to re-setup libipu since sceMpegGetPicture was aborted\n" // 0x00147e74: addiu $a1, $a1, 0x68d8
    goto label_0x147fc8;                                        // 0x00147e78: b 0x147fc8
    v0 = -1;                                                    // 0x00147e7c: addiu $v0, $zero, -1
label_0x147e80:
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00147e80: lw $v0, 0x10a0($s0)
    if (v0 == 0) goto label_0x147eac;                           // 0x00147e84: beqz $v0, 0x147eac
    a0 = 0x22 << 16;                                            // 0x00147e88: lui $a0, 0x22
    func_00116598();  // 0x116508                                // 0x00147e8c: jal 0x116508
    a0 = &str_00226918;  // "sceMpegGetPicture is aborted\n"    // 0x00147e90: addiu $a0, $a0, 0x6918
    goto label_0x147fc8;                                        // 0x00147e94: b 0x147fc8
    v0 = -1;                                                    // 0x00147e98: addiu $v0, $zero, -1
label_0x147e9c:
    func_00116598();  // 0x116508                                // 0x00147e9c: jal 0x116508
    a0 = a0 + 0x6958;                                           // 0x00147ea0: addiu $a0, $a0, 0x6958
    goto label_0x147fc8;                                        // 0x00147ea4: b 0x147fc8
    v0 = -1;                                                    // 0x00147ea8: addiu $v0, $zero, -1
label_0x147eac:
    *(uint32_t*)((s0) + 0x838) = 0;                             // 0x00147eac: sw $zero, 0x838($s0)
    v0 = -1;                                                    // 0x00147eb0: addiu $v0, $zero, -1
    /* nop */                                                   // 0x00147eb4: nop 
label_0x147eb8:
    if (s3 == v0) goto label_0x147ef8;                          // 0x00147eb8: beq $s3, $v0, 0x147ef8
    v0 = ((unsigned)s2 < (unsigned)5) ? 1 : 0;                  // 0x00147ebc: sltiu $v0, $s2, 5
label_0x147ec0:
    func_00145a20();  // 0x145900                                // 0x00147ec0: jal 0x145900
    if (s2 < 0) goto label_0x147fc8;                            // 0x00147ecc: bltz $s2, 0x147fc8
    v0 = -1;                                                    // 0x00147ed0: addiu $v0, $zero, -1
    if (s2 == 0) goto label_0x147ef8;                           // 0x00147ed4: beqz $s2, 0x147ef8
    v0 = ((unsigned)s2 < (unsigned)5) ? 1 : 0;                  // 0x00147ed8: sltiu $v0, $s2, 5
    v1 = *(int32_t*)((s0) + 0x18c);                             // 0x00147edc: lw $v1, 0x18c($s0)
    v0 = *(int32_t*)((s0) + 0xec);                              // 0x00147ee0: lw $v0, 0xec($s0)
    if (v1 == v0) goto label_0x147ef8;                          // 0x00147ee4: beq $v1, $v0, 0x147ef8
    v0 = ((unsigned)s2 < (unsigned)5) ? 1 : 0;                  // 0x00147ee8: sltiu $v0, $s2, 5
    v0 = *(int32_t*)((s0) + 0x860);                             // 0x00147eec: lw $v0, 0x860($s0)
    if (v0 != 0) goto label_0x147ec0;                           // 0x00147ef0: bnez $v0, 0x147ec0
    v0 = ((unsigned)s2 < (unsigned)5) ? 1 : 0;                  // 0x00147ef4: sltiu $v0, $s2, 5
label_0x147ef8:
    if (v0 == 0) goto label_0x147fa0;                           // 0x00147ef8: beqz $v0, 0x147fa0
    v0 = 0x22 << 16;                                            // 0x00147efc: lui $v0, 0x22
    v1 = s2 << 2;                                               // 0x00147f00: sll $v1, $s2, 2
    v0 = v0 + 0x6980;                                           // 0x00147f04: addiu $v0, $v0, 0x6980
    v1 = v1 + v0;                                               // 0x00147f08: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x00147f0c: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x00147f10: jr $a0
    /* nop */                                                   // 0x00147f14: nop 
    func_00148330();  // 0x1482c8                                // 0x00147f18: jal 0x1482c8
    v1 = 1;                                                     // 0x00147f20: addiu $v1, $zero, 1
    goto label_0x147fa0;                                        // 0x00147f24: b 0x147fa0
    *(uint32_t*)(s0) = v1;                                      // 0x00147f28: sw $v1, 0($s0)
    *(uint32_t*)((s0) + 0xc0) = 0;                              // 0x00147f2c: sw $zero, 0xc0($s0)
    *(uint32_t*)((s0) + 0xbc) = 0;                              // 0x00147f34: sw $zero, 0xbc($s0)
    *(uint32_t*)((s0) + 0xb8) = 0;                              // 0x00147f3c: sw $zero, 0xb8($s0)
    func_00148150();  // 0x148108                                // 0x00147f40: jal 0x148108
    a2 = *(int32_t*)((s0) + 0xac);                              // 0x00147f44: lw $a2, 0xac($s0)
    v1 = *(int32_t*)((s0) + 0xb8);                              // 0x00147f48: lw $v1, 0xb8($s0)
    v1 = v1 + 1;                                                // 0x00147f50: addiu $v1, $v1, 1
    goto label_0x147fa0;                                        // 0x00147f54: b 0x147fa0
    *(uint32_t*)((s0) + 0xb8) = v1;                             // 0x00147f58: sw $v1, 0xb8($s0)
    a1 = *(int32_t*)((s0) + 0xbc);                              // 0x00147f5c: lw $a1, 0xbc($s0)
    func_00148150();  // 0x148108                                // 0x00147f64: jal 0x148108
    a2 = *(int32_t*)((s0) + 0xb0);                              // 0x00147f68: lw $a2, 0xb0($s0)
    v1 = *(int32_t*)((s0) + 0xbc);                              // 0x00147f6c: lw $v1, 0xbc($s0)
    v1 = v1 + 1;                                                // 0x00147f74: addiu $v1, $v1, 1
    goto label_0x147fa0;                                        // 0x00147f78: b 0x147fa0
    *(uint32_t*)((s0) + 0xbc) = v1;                             // 0x00147f7c: sw $v1, 0xbc($s0)
    a1 = *(int32_t*)((s0) + 0xc0);                              // 0x00147f80: lw $a1, 0xc0($s0)
    func_00148150();  // 0x148108                                // 0x00147f88: jal 0x148108
    a2 = *(int32_t*)((s0) + 0xb4);                              // 0x00147f8c: lw $a2, 0xb4($s0)
    v1 = *(int32_t*)((s0) + 0xc0);                              // 0x00147f90: lw $v1, 0xc0($s0)
    v1 = v1 + 1;                                                // 0x00147f98: addiu $v1, $v1, 1
    *(uint32_t*)((s0) + 0xc0) = v1;                             // 0x00147f9c: sw $v1, 0xc0($s0)
label_0x147fa0:
    v0 = *(int32_t*)((s0) + 0x10a0);                            // 0x00147fa0: lw $v0, 0x10a0($s0)
    if (v0 != 0) goto label_0x147e9c;                           // 0x00147fa4: bnez $v0, 0x147e9c
    a0 = 0x22 << 16;                                            // 0x00147fa8: lui $a0, 0x22
    v0 = *(int32_t*)((s0) + 0x838);                             // 0x00147fac: lw $v0, 0x838($s0)
    if (v0 != 0) goto label_0x147fc8;                           // 0x00147fb0: bnez $v0, 0x147fc8
    v0 = 1;                                                     // 0x00147fb4: addiu $v0, $zero, 1
    v0 = *(int32_t*)(s0);                                       // 0x00147fb8: lw $v0, 0($s0)
    if (v0 == 0) goto label_0x147eb8;                           // 0x00147fbc: beqz $v0, 0x147eb8
    v0 = -1;                                                    // 0x00147fc0: addiu $v0, $zero, -1
    v0 = 1;                                                     // 0x00147fc4: addiu $v0, $zero, 1
label_0x147fc8:
    return;                                                     // 0x00147fdc: jr $ra
    sp = sp + 0x50;                                             // 0x00147fe0: addiu $sp, $sp, 0x50
}