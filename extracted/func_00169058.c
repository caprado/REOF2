void func_00169058() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x30;                                            // 0x00169058: addiu $sp, $sp, -0x30
    func_00178fc8();  // 178fc8                                // 0x00169074: jal 0x178fc8
    v1 = local_0;                                               // 0x0016907c: lw $v1, 0($sp)
    a1 = sp + 4;                                                // 0x00169080: addiu $a1, $sp, 4
    a2 = sp + 8;                                                // 0x00169088: addiu $a2, $sp, 8
    if (v0 == 0) v1 = 0;                                        // 0x0016908c: movz $v1, $zero, $v0
    if (v1 == 0) goto label_0x169198;                           // 0x00169090: beqz $v1, 0x169198
    local_0 = v1;                                               // 0x00169094: sw $v1, 0($sp)
    func_001793b0();  // 1793b0                                // 0x00169098: jal 0x1793b0
    /* nop */                                                   // 0x0016909c: nop 
    if (v0 != 0) goto label_0x1690b4;                           // 0x001690a0: bnez $v0, 0x1690b4
    v0 = local_4;                                               // 0x001690a4: lw $v0, 4($sp)
    local_4 = 0;                                                // 0x001690a8: sw $zero, 4($sp)
    local_8 = 0;                                                // 0x001690ac: sw $zero, 8($sp)
    v0 = local_4;                                               // 0x001690b0: lw $v0, 4($sp)
label_0x1690b4:
    v1 = local_8;                                               // 0x001690b8: lw $v1, 8($sp)
    a1 = sp + 0xc;                                              // 0x001690bc: addiu $a1, $sp, 0xc
    s0 = v0 << 1;                                               // 0x001690c0: sll $s0, $v0, 1
    *(uint32_t*)((s1) + 4) = v0;                                // 0x001690c4: sw $v0, 4($s1)
    s0 = s0 + v0;                                               // 0x001690c8: addu $s0, $s0, $v0
    *(uint32_t*)((s1) + 8) = v1;                                // 0x001690cc: sw $v1, 8($s1)
    s0 = s0 << 3;                                               // 0x001690d0: sll $s0, $s0, 3
    s0 = s0 + v0;                                               // 0x001690d4: addu $s0, $s0, $v0
    s0 = s0 << 2;                                               // 0x001690d8: sll $s0, $s0, 2
    func_001797f8();  // 1797f8                                // 0x001690dc: jal 0x1797f8
    s0 = s0 + v1;                                               // 0x001690e0: addu $s0, $s0, $v1
    v1 = local_c;                                               // 0x001690e4: lw $v1, 0xc($sp)
    s0 = (s0 < 0x6e) ? 1 : 0;                                   // 0x001690e8: slti $s0, $s0, 0x6e
    if (v0 == 0) v1 = 0;                                        // 0x001690f4: movz $v1, $zero, $v0
    v0 = -v1;                                                   // 0x001690f8: negu $v0, $v1
    if (s0 == 0) goto label_0x169108;                           // 0x001690fc: beqz $s0, 0x169108
    local_c = v1;                                               // 0x00169100: sw $v1, 0xc($sp)
    local_c = v0;                                               // 0x00169104: sw $v0, 0xc($sp)
label_0x169108:
    v0 = local_c;                                               // 0x00169108: lw $v0, 0xc($sp)
    func_001691b0();  // 1691b0                                // 0x0016910c: jal 0x1691b0
    *(uint32_t*)((s1) + 0xc) = v0;                              // 0x00169110: sw $v0, 0xc($s1)
    func_00169240();  // 169240                                // 0x00169118: jal 0x169240
    a1 = s1 + 0x20;                                             // 0x0016911c: addiu $a1, $s1, 0x20
    a1 = 0xbd;                                                  // 0x00169124: addiu $a1, $zero, 0xbd
    func_001692f8();  // 1692f8                                // 0x00169128: jal 0x1692f8
    a2 = 0xbd;                                                  // 0x0016912c: addiu $a2, $zero, 0xbd
    *(uint32_t*)((s1) + 0x3c) = v0;                             // 0x00169134: sw $v0, 0x3c($s1)
    a1 = 0xbf;                                                  // 0x00169138: addiu $a1, $zero, 0xbf
    func_001692f8();  // 1692f8                                // 0x0016913c: jal 0x1692f8
    a2 = 0xbf;                                                  // 0x00169140: addiu $a2, $zero, 0xbf
    *(uint32_t*)((s1) + 0x40) = v0;                             // 0x00169148: sw $v0, 0x40($s1)
    a1 = 0xc0;                                                  // 0x0016914c: addiu $a1, $zero, 0xc0
    func_001692f8();  // 1692f8                                // 0x00169150: jal 0x1692f8
    a2 = 0xdf;                                                  // 0x00169154: addiu $a2, $zero, 0xdf
    *(uint32_t*)((s1) + 0x44) = v0;                             // 0x0016915c: sw $v0, 0x44($s1)
    a1 = 0xe0;                                                  // 0x00169160: addiu $a1, $zero, 0xe0
    func_001692f8();  // 1692f8                                // 0x00169164: jal 0x1692f8
    a2 = 0xef;                                                  // 0x00169168: addiu $a2, $zero, 0xef
    *(uint32_t*)((s1) + 0x48) = v0;                             // 0x00169170: sw $v0, 0x48($s1)
    a2 = s1 + 0x4c;                                             // 0x00169174: addiu $a2, $s1, 0x4c
    func_00169370();  // 169370                                // 0x00169178: jal 0x169370
    a1 = *(int32_t*)((s1) + 0x44);                              // 0x0016917c: lw $a1, 0x44($s1)
    a1 = *(int32_t*)((s1) + 0x48);                              // 0x00169184: lw $a1, 0x48($s1)
    func_00169408();  // 169408                                // 0x00169188: jal 0x169408
    a2 = s1 + 0x5c;                                             // 0x0016918c: addiu $a2, $s1, 0x5c
    v0 = 1;                                                     // 0x00169190: addiu $v0, $zero, 1
    *(uint32_t*)(s1) = v0;                                      // 0x00169194: sw $v0, 0($s1)
label_0x169198:
    return;                                                     // 0x001691a8: jr $ra
    sp = sp + 0x30;                                             // 0x001691ac: addiu $sp, $sp, 0x30
}