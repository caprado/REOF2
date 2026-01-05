void func_0012c9a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x0012c9a0: addiu $sp, $sp, -0x50
    a2 = 0x1000;                                                // 0x0012c9a4: addiu $a2, $zero, 0x1000
    a1 = 1;                                                     // 0x0012c9b4: addiu $a1, $zero, 1
    s1 = *(int32_t*)((s3) + 8);                                 // 0x0012c9c8: lw $s1, 8($s3)
    s0 = *(int32_t*)((s3) + 4);                                 // 0x0012c9cc: lw $s0, 4($s3)
    v0 = *(int32_t*)(s1);                                       // 0x0012c9d0: lw $v0, 0($s1)
    v1 = *(int32_t*)((v0) + 0x18);                              // 0x0012c9d4: lw $v1, 0x18($v0)
    /* call function at address in v1 */                        // 0x0012c9d8: jalr $v1
    a2 = local_4;                                               // 0x0012c9e0: lw $a2, 4($sp)
    v0 = (a2 < 0x10) ? 1 : 0;                                   // 0x0012c9e4: slti $v0, $a2, 0x10
    /* bnezl $v0, 0x12ca18 */                                   // 0x0012c9e8: bnezl $v0, 0x12ca18
    v1 = *(int32_t*)(s1);                                       // 0x0012c9ec: lw $v1, 0($s1)
    a1 = local_0;                                               // 0x0012c9f0: lw $a1, 0($sp)
    func_00124998();  // 124998                                // 0x0012c9f4: jal 0x124998
    if (s2 == 0) goto label_0x12ca14;                           // 0x0012ca00: beqz $s2, 0x12ca14
    v0 = local_4;                                               // 0x0012ca04: lw $v0, 4($sp)
    v0 = (v0 < s2) ? 1 : 0;                                     // 0x0012ca08: slt $v0, $v0, $s2
    if (v0 == 0) goto label_0x12ca38;                           // 0x0012ca0c: beqz $v0, 0x12ca38
    /* nop */                                                   // 0x0012ca10: nop 
label_0x12ca14:
    v1 = *(int32_t*)(s1);                                       // 0x0012ca14: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012ca1c: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012ca20: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012ca24: jalr $v0
    goto label_0x12cb60;                                        // 0x0012ca2c: b 0x12cb60
    /* nop */                                                   // 0x0012ca34: nop 
label_0x12ca38:
    if (s2 >= 0) goto label_0x12ca78;                           // 0x0012ca38: bgezl $s2, 0x12ca78
    *(uint32_t*)((s3) + 0x98) = s2;                             // 0x0012ca3c: sw $s2, 0x98($s3)
    v1 = *(int32_t*)(s1);                                       // 0x0012ca40: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012ca48: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012ca4c: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012ca50: jalr $v0
    a0 = 0x22 << 16;                                            // 0x0012ca58: lui $a0, 0x22
    a1 = 0x22 << 16;                                            // 0x0012ca5c: lui $a1, 0x22
    a0 = &str_002235d0;  // "Can not decode this file format."  // 0x0012ca60: addiu $a0, $a0, 0x35d0
    func_00127de8();  // 127de8                                // 0x0012ca64: jal 0x127de8
    a1 = &str_002235f0;  // "CRI-MW"                            // 0x0012ca68: addiu $a1, $a1, 0x35f0
    goto label_0x12cb58;                                        // 0x0012ca6c: b 0x12cb58
    v0 = 4;                                                     // 0x0012ca70: addiu $v0, $zero, 4
    /* nop */                                                   // 0x0012ca74: nop 
label_0x12ca78:
    func_00124b28();  // 124b28                                // 0x0012ca78: jal 0x124b28
    v1 = 4;                                                     // 0x0012ca80: addiu $v1, $zero, 4
    if (v0 != v1) goto label_0x12ca90;                          // 0x0012ca84: bne $v0, $v1, 0x12ca90
    v0 = 1;                                                     // 0x0012ca88: addiu $v0, $zero, 1
    *(uint8_t*)((s3) + 3) = v0;                                 // 0x0012ca8c: sb $v0, 3($s3)
label_0x12ca90:
    func_00124b28();  // 124b28                                // 0x0012ca90: jal 0x124b28
    v1 = 2;                                                     // 0x0012ca98: addiu $v1, $zero, 2
    if (v0 != v1) goto label_0x12cabc;                          // 0x0012ca9c: bne $v0, $v1, 0x12cabc
    v1 = 0x40;                                                  // 0x0012caa0: addiu $v1, $zero, 0x40
    a2 = local_4;                                               // 0x0012caa4: lw $a2, 4($sp)
    a1 = local_0;                                               // 0x0012caa8: lw $a1, 0($sp)
    a0 = s3 + 0x58;                                             // 0x0012caac: addiu $a0, $s3, 0x58
    v0 = (a2 < 0x41) ? 1 : 0;                                   // 0x0012cab0: slti $v0, $a2, 0x41
    func_00107ab8();  // 107ab8                                // 0x0012cab4: jal 0x107ab8
    if (v0 == 0) a2 = v1;                                       // 0x0012cab8: movz $a2, $v1, $v0
label_0x12cabc:
    func_00124b28();  // 124b28                                // 0x0012cabc: jal 0x124b28
    v0 = v1 + -0xa;                                             // 0x0012cac8: addiu $v0, $v1, -0xa
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x0012cacc: sltiu $v0, $v0, 2
    /* bnezl $v0, 0x12caf0 */                                   // 0x0012cad0: bnezl $v0, 0x12caf0
    v1 = *(int32_t*)(s1);                                       // 0x0012cad4: lw $v1, 0($s1)
    v0 = 0x14;                                                  // 0x0012cad8: addiu $v0, $zero, 0x14
    if (v1 == v0) goto label_0x12caec;                          // 0x0012cadc: beq $v1, $v0, 0x12caec
    v0 = 0xf;                                                   // 0x0012cae0: addiu $v0, $zero, 0xf
    if (v1 != v0) goto label_0x12cb10;                          // 0x0012cae4: bnel $v1, $v0, 0x12cb10
    s0 = sp + 0x10;                                             // 0x0012cae8: addiu $s0, $sp, 0x10
label_0x12caec:
    v1 = *(int32_t*)(s1);                                       // 0x0012caec: lw $v1, 0($s1)
    a1 = 1;                                                     // 0x0012caf4: addiu $a1, $zero, 1
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012caf8: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cafc: jalr $v0
    goto label_0x12cb58;                                        // 0x0012cb04: b 0x12cb58
    v0 = 2;                                                     // 0x0012cb08: addiu $v0, $zero, 2
    /* nop */                                                   // 0x0012cb0c: nop 
label_0x12cb10:
    func_001404a0();  // 1404a0                                // 0x0012cb1c: jal 0x1404a0
    v1 = *(int32_t*)(s1);                                       // 0x0012cb24: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x20);                              // 0x0012cb30: lw $v0, 0x20($v1)
    /* call function at address in v0 */                        // 0x0012cb34: jalr $v0
    v1 = *(int32_t*)(s1);                                       // 0x0012cb3c: lw $v1, 0($s1)
    v0 = *(int32_t*)((v1) + 0x1c);                              // 0x0012cb48: lw $v0, 0x1c($v1)
    /* call function at address in v0 */                        // 0x0012cb4c: jalr $v0
    a1 = 1;                                                     // 0x0012cb50: addiu $a1, $zero, 1
    v0 = 2;                                                     // 0x0012cb54: addiu $v0, $zero, 2
label_0x12cb58:
    *(uint8_t*)((s3) + 1) = v0;                                 // 0x0012cb58: sb $v0, 1($s3)
label_0x12cb60:
    return;                                                     // 0x0012cb70: jr $ra
    sp = sp + 0x50;                                             // 0x0012cb74: addiu $sp, $sp, 0x50
}