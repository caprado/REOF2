void func_00164e80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x50;                                            // 0x00164e80: addiu $sp, $sp, -0x50
    *(uint32_t*)(s5) = 0;                                       // 0x00164eb0: sw $zero, 0($s5)
    func_00169678();  // 0x169640                                // 0x00164eb4: jal 0x169640
    s3 = *(int32_t*)((s4) + 0x1b74);                            // 0x00164eb8: lw $s3, 0x1b74($s4)
    v0 = (v0 < 0x6c) ? 1 : 0;                                   // 0x00164ebc: slti $v0, $v0, 0x6c
    if (v0 != 0) goto label_0x164ed8;                           // 0x00164ec0: bnez $v0, 0x164ed8
    v0 = 0x16 << 16;                                            // 0x00164ec8: lui $v0, 0x16
    v0 = v0 + 0x4ca8;                                           // 0x00164ecc: addiu $v0, $v0, 0x4ca8
    goto label_0x164f64;                                        // 0x00164ed0: b 0x164f64
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00164ed4: sw $v0, 0x3c($s3)
label_0x164ed8:
    goto label_0x164ee4;                                        // 0x00164ed8: b 0x164ee4
    s2 = s2 + -0x12;                                            // 0x00164edc: addiu $s2, $s2, -0x12
label_0x164ee0:
    s1 = s1 + 0x12;                                             // 0x00164ee0: addiu $s1, $s1, 0x12
label_0x164ee4:
    v0 = (s1 < s2) ? 1 : 0;                                     // 0x00164ee4: slt $v0, $s1, $s2
    /* beqzl $v0, 0x164f1c */                                   // 0x00164ee8: beqzl $v0, 0x164f1c
    *(uint32_t*)(s5) = s1;                                      // 0x00164eec: sw $s1, 0($s5)
    a1 = 0x23 << 16;                                            // 0x00164ef0: lui $a1, 0x23
    a1 = a1 + -0x71a0;                                          // 0x00164ef8: addiu $a1, $a1, -0x71a0
    func_00107ab8();  // 0x107a20                                // 0x00164efc: jal 0x107a20
    a2 = 0x12;                                                  // 0x00164f00: addiu $a2, $zero, 0x12
    if (v0 == 0) goto label_0x164ee0;                           // 0x00164f04: beqz $v0, 0x164ee0
    s0 = s0 + 0x12;                                             // 0x00164f08: addiu $s0, $s0, 0x12
    v0 = 0x16 << 16;                                            // 0x00164f0c: lui $v0, 0x16
    v0 = v0 + 0x4ca8;                                           // 0x00164f10: addiu $v0, $v0, 0x4ca8
    *(uint32_t*)((s3) + 0x3c) = v0;                             // 0x00164f14: sw $v0, 0x3c($s3)
    *(uint32_t*)(s5) = s1;                                      // 0x00164f18: sw $s1, 0($s5)
    func_00164fd8();  // 0x164f88                                // 0x00164f24: jal 0x164f88
    a2 = sp + 4;                                                // 0x00164f28: addiu $a2, $sp, 4
    if (v0 != 0) goto label_0x164f68;                           // 0x00164f2c: bnez $v0, 0x164f68
    v1 = local_0;                                               // 0x00164f34: lw $v1, 0($sp)
    v0 = v1 << 3;                                               // 0x00164f38: sll $v0, $v1, 3
    v0 = v0 + v1;                                               // 0x00164f3c: addu $v0, $v0, $v1
    v0 = v0 << 1;                                               // 0x00164f40: sll $v0, $v0, 1
    /* divide: s1 / v0 -> hi:lo */                              // 0x00164f44: div $zero, $s1, $v0
    /* beqzl $v0, 0x164f50 */                                   // 0x00164f48: beqzl $v0, 0x164f50
    /* break (trap) */                                          // 0x00164f4c: break 0, 7
    v1 = *(int32_t*)((s3) + 0x38);                              // 0x00164f50: lw $v1, 0x38($s3)
    /* mflo $a0 */                                              // 0x00164f54
    a0 = a0 << 5;                                               // 0x00164f58: sll $a0, $a0, 5
    v1 = v1 + a0;                                               // 0x00164f5c: addu $v1, $v1, $a0
    *(uint32_t*)((s3) + 0x38) = v1;                             // 0x00164f60: sw $v1, 0x38($s3)
label_0x164f64:
label_0x164f68:
    return;                                                     // 0x00164f80: jr $ra
    sp = sp + 0x50;                                             // 0x00164f84: addiu $sp, $sp, 0x50
}