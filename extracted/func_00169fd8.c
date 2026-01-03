void func_00169fd8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_4, local_8, local_c;
    
    sp = sp + -0x60;                                            // 0x00169fd8: addiu $sp, $sp, -0x60
    *(uint32_t*)(s4) = 0;                                       // 0x0016a010: sw $zero, 0($s4)
    v0 = *(int32_t*)((s0) + 0x1aec);                            // 0x0016a014: lw $v0, 0x1aec($s0)
    func_0016ad88();  // 16ad88                                // 0x0016a018: jal 0x16ad88
    s1 = g_00040000;  // Global at 0x00040000                   // 0x0016a01c: lw $s1, 0($v0)
    if (v0 == 0) goto label_0x16a150;                           // 0x0016a020: beqz $v0, 0x16a150
    func_001560c0();  // 1560c0                                // 0x0016a034: jal 0x1560c0
    t0 = sp + 4;                                                // 0x0016a038: addiu $t0, $sp, 4
    if (v0 == 0) goto label_0x16a054;                           // 0x0016a03c: beqz $v0, 0x16a054
    a1 = 0xff00 << 16;                                          // 0x0016a044: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x0016a048: jal 0x1698d0
    a1 = a1 | 0xd03;                                            // 0x0016a04c: ori $a1, $a1, 0xd03
label_0x16a054:
    v1 = local_4;                                               // 0x0016a054: lw $v1, 4($sp)
    v0 = 2 << 16;                                               // 0x0016a058: lui $v0, 2
    v0 = v1 & v0;                                               // 0x0016a05c: and $v0, $v1, $v0
    if (v0 == 0) goto label_0x16a07c;                           // 0x0016a060: beqz $v0, 0x16a07c
    func_0016b3f8();  // 16b3f8                                // 0x0016a070: jal 0x16b3f8
    v1 = local_4;                                               // 0x0016a078: lw $v1, 4($sp)
label_0x16a07c:
    v0 = 8 << 16;                                               // 0x0016a07c: lui $v0, 8
    if (v1 != v0) goto label_0x16a0c4;                          // 0x0016a080: bne $v1, $v0, 0x16a0c4
    func_00167a90();  // 167a90                                // 0x0016a088: jal 0x167a90
    if (v0 == 0) goto label_0x16a0a8;                           // 0x0016a090: beqz $v0, 0x16a0a8
    v1 = local_4;                                               // 0x0016a094: lw $v1, 4($sp)
    func_0016ad70();  // 16ad70                                // 0x0016a098: jal 0x16ad70
    goto label_0x16a148;                                        // 0x0016a0a0: b 0x16a148
    v0 = 4;                                                     // 0x0016a0a4: addiu $v0, $zero, 4
label_0x16a0a8:
    if (v1 != s1) goto label_0x16a0c4;                          // 0x0016a0a8: bne $v1, $s1, 0x16a0c4
    /* nop */                                                   // 0x0016a0ac: nop 
    func_00167ab0();  // 167ab0                                // 0x0016a0b0: jal 0x167ab0
    if (v0 != 0) goto label_0x16a148;                           // 0x0016a0b8: bnez $v0, 0x16a148
    v0 = 4;                                                     // 0x0016a0bc: addiu $v0, $zero, 4
    v1 = local_4;                                               // 0x0016a0c0: lw $v1, 4($sp)
label_0x16a0c4:
    if (v1 != 0) goto label_0x16a0e8;                           // 0x0016a0c4: bnez $v1, 0x16a0e8
    v0 = 4 << 16;                                               // 0x0016a0c8: lui $v0, 4
    func_0016a178();  // 16a178                                // 0x0016a0d8: jal 0x16a178
    a3 = sp + 8;                                                // 0x0016a0dc: addiu $a3, $sp, 8
    goto label_0x16a148;                                        // 0x0016a0e0: b 0x16a148
    v0 = local_8;                                               // 0x0016a0e4: lw $v0, 8($sp)
label_0x16a0e8:
    v0 = v1 & v0;                                               // 0x0016a0e8: and $v0, $v1, $v0
    /* bnezl $v0, 0x16a110 */                                   // 0x0016a0ec: bnezl $v0, 0x16a110
    a1 = local_0;                                               // 0x0016a0f0: lw $a1, 0($sp)
    a1 = 0xff00 << 16;                                          // 0x0016a0f4: lui $a1, 0xff00
    func_001698d0();  // 1698d0                                // 0x0016a0fc: jal 0x1698d0
    a1 = a1 | 0xd05;                                            // 0x0016a100: ori $a1, $a1, 0xd05
    goto label_0x16a14c;                                        // 0x0016a104: b 0x16a14c
    /* nop */                                                   // 0x0016a10c: nop 
    a3 = sp + 0xc;                                              // 0x0016a114: addiu $a3, $sp, 0xc
    t0 = sp + 0x10;                                             // 0x0016a118: addiu $t0, $sp, 0x10
    a2 = s2 - a1;                                               // 0x0016a11c: subu $a2, $s2, $a1
    func_0016a320();  // 16a320                                // 0x0016a120: jal 0x16a320
    a1 = s3 + a1;                                               // 0x0016a124: addu $a1, $s3, $a1
    v1 = 1;                                                     // 0x0016a128: addiu $v1, $zero, 1
    v0 = local_10;                                              // 0x0016a130: lw $v0, 0x10($sp)
    if (v0 != v1) goto label_0x16a150;                          // 0x0016a134: bne $v0, $v1, 0x16a150
    v0 = local_0;                                               // 0x0016a13c: lw $v0, 0($sp)
    v1 = local_c;                                               // 0x0016a140: lw $v1, 0xc($sp)
    v0 = v0 + v1;                                               // 0x0016a144: addu $v0, $v0, $v1
label_0x16a148:
    *(uint32_t*)(s4) = v0;                                      // 0x0016a148: sw $v0, 0($s4)
label_0x16a14c:
label_0x16a150:
    return;                                                     // 0x0016a16c: jr $ra
    sp = sp + 0x60;                                             // 0x0016a170: addiu $sp, $sp, 0x60
}