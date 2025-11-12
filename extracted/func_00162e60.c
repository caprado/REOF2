void func_00162e60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x00162e60: addiu $sp, $sp, -0x50
    s2 = s0 + 0x1ec;                                            // 0x00162e78: addiu $s2, $s0, 0x1ec
    func_00163100();  // 0x1630e0                                // 0x00162e90: jal 0x1630e0
    /* beqzl $v0, 0x162f60 */                                   // 0x00162e98: beqzl $v0, 0x162f60
    func_00162a48();  // 0x1629e0                                // 0x00162ea0: jal 0x1629e0
    /* nop */                                                   // 0x00162ea4: nop 
    s5 = *(int32_t*)((s0) + 0x40);                              // 0x00162ea8: lw $s5, 0x40($s0)
    *(uint32_t*)((s2) + 8) = s1;                                // 0x00162eac: sw $s1, 8($s2)
    *(uint32_t*)((s2) + 4) = s3;                                // 0x00162eb4: sw $s3, 4($s2)
    a1 = sp + 4;                                                // 0x00162eb8: addiu $a1, $sp, 4
    *(uint32_t*)((s2) + 0x10) = s4;                             // 0x00162ebc: sw $s4, 0x10($s2)
    func_00162b10();  // 0x162aa8                                // 0x00162ec0: jal 0x162aa8
    a2 = sp + 8;                                                // 0x00162ec4: addiu $a2, $sp, 8
    a0 = 0x23 << 16;                                            // 0x00162ec8: lui $a0, 0x23
    v0 = (s1 < v0) ? 1 : 0;                                     // 0x00162ecc: slt $v0, $s1, $v0
    if (v0 != 0) goto label_0x162f38;                           // 0x00162ed0: bnez $v0, 0x162f38
    a0 = &str_00228c98;  // "E303112: MWSST_Create: can't create SJ." // 0x00162ed4: addiu $a0, $a0, -0x7368
    a0 = local_0;                                               // 0x00162ed8: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x00162edc: lw $a1, 4($sp)
    a2 = local_8;                                               // 0x00162ee0: lw $a2, 8($sp)
    func_0013f658();  // 0x13f568                                // 0x00162ee4: jal 0x13f568
    a0 = s3 + a0;                                               // 0x00162ee8: addu $a0, $s3, $a0
    if (s1 != 0) goto label_0x162f08;                           // 0x00162ef0: bnez $s1, 0x162f08
    a0 = 0x23 << 16;                                            // 0x00162ef8: lui $a0, 0x23
    goto label_0x162f38;                                        // 0x00162efc: b 0x162f38
    a0 = &str_00228cc8;  // "E303112: MWSST_Create: can't create corehn." // 0x00162f00: addiu $a0, $a0, -0x7338
    /* nop */                                                   // 0x00162f04: nop 
label_0x162f08:
    *(uint32_t*)((s2) + 0xc) = s1;                              // 0x00162f08: sw $s1, 0xc($s2)
    func_00162b68();  // 0x162b10                                // 0x00162f0c: jal 0x162b10
    a1 = local_0;                                               // 0x00162f10: lw $a1, 0($sp)
    a1 = s4 + 0xc0;                                             // 0x00162f1c: addiu $a1, $s4, 0xc0
    if (s0 != 0) goto label_0x162f48;                           // 0x00162f28: bnez $s0, 0x162f48
    a0 = 0x23 << 16;                                            // 0x00162f30: lui $a0, 0x23
    a0 = &str_00228cf0;  // "E99072103 mwPlyStartXX: can't link stream" // 0x00162f34: addiu $a0, $a0, -0x7310
label_0x162f38:
    func_001634a8();  // 0x163410                                // 0x00162f38: jal 0x163410
    /* nop */                                                   // 0x00162f3c: nop 
    goto label_0x162f5c;                                        // 0x00162f40: b 0x162f5c
label_0x162f48:
    v0 = 1;                                                     // 0x00162f48: addiu $v0, $zero, 1
    *(uint32_t*)((s2) + 0x14) = s0;                             // 0x00162f4c: sw $s0, 0x14($s2)
    func_00169d60();  // 0x169cb0                                // 0x00162f50: jal 0x169cb0
    *(uint32_t*)(s2) = v0;                                      // 0x00162f54: sw $v0, 0($s2)
label_0x162f5c:
    return;                                                     // 0x00162f78: jr $ra
    sp = sp + 0x50;                                             // 0x00162f7c: addiu $sp, $sp, 0x50
}