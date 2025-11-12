void func_001b90e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001b90e0: addiu $sp, $sp, -0x40
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001b90e8: addu.qb $zero, $sp, $s1
    v1 = s1 << 4;                                               // 0x001b90f4: sll $v1, $s1, 4
label_0x1b90f8:
    v0 = 0x39 << 16;                                            // 0x001b90f8: lui $v0, 0x39
    v1 = v1 - s1;                                               // 0x001b90fc: subu $v1, $v1, $s1
    v0 = v0 + 0x4fe0;                                           // 0x001b9100: addiu $v0, $v0, 0x4fe0
    v1 = v1 << 2;                                               // 0x001b9104: sll $v1, $v1, 2
    s0 = v0 + v1;                                               // 0x001b9108: addu $s0, $v0, $v1
    v0 = *(int8_t*)(s0);                                        // 0x001b910c: lb $v0, 0($s0)
    if (v0 == 0) goto label_0x1b9208;                           // 0x001b9110: beqz $v0, 0x1b9208
    /* nop */                                                   // 0x001b9114: nop 
    v0 = *(int8_t*)((s0) + 1);                                  // 0x001b9118: lb $v0, 1($s0)
    if (v0 != 0) goto label_0x1b9208;                           // 0x001b911c: bnez $v0, 0x1b9208
    /* nop */                                                   // 0x001b9120: nop 
    v0 = *(int8_t*)((s0) + 3);                                  // 0x001b9124: lb $v0, 3($s0)
    if (v0 != 0) goto label_0x1b9194;                           // 0x001b9128: bnez $v0, 0x1b9194
    v1 = *(int32_t*)((s0) + 0x24);                              // 0x001b9130: lw $v1, 0x24($s0)
    if (v1 == 0) goto label_0x1b9168;                           // 0x001b9134: beqz $v1, 0x1b9168
    /* nop */                                                   // 0x001b9138: nop 
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x001b913c: lbu $v0, 2($s0)
    a3 = v1 + 8;                                                // 0x001b9140: addiu $a3, $v1, 8
    a0 = 2;                                                     // 0x001b9144: addiu $a0, $zero, 2
    t0 = 1;                                                     // 0x001b914c: addiu $t0, $zero, 1
    func_001b8c20();  // 0x1b8b40                                // 0x001b9158: jal 0x1b8b40
    a1 = v0 + 1;                                                // 0x001b915c: addiu $a1, $v0, 1
    goto label_0x1b920c;                                        // 0x001b9160: b 0x1b920c
    s1 = s1 + 1;                                                // 0x001b9164: addiu $s1, $s1, 1
label_0x1b9168:
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x001b9168: lbu $v0, 2($s0)
    a3 = s0 + 0x2c;                                             // 0x001b916c: addiu $a3, $s0, 0x2c
    a0 = 2;                                                     // 0x001b9170: addiu $a0, $zero, 2
    t0 = 1;                                                     // 0x001b9178: addiu $t0, $zero, 1
    func_001b8c20();  // 0x1b8b40                                // 0x001b9184: jal 0x1b8b40
    a1 = v0 + 1;                                                // 0x001b9188: addiu $a1, $v0, 1
    goto label_0x1b9208;                                        // 0x001b918c: b 0x1b9208
    /* nop */                                                   // 0x001b9190: nop 
label_0x1b9194:
    v0 = 2;                                                     // 0x001b9198: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1b9208;                          // 0x001b919c: bne $v1, $v0, 0x1b9208
    /* nop */                                                   // 0x001b91a0: nop 
    a0 = *(int32_t*)((s0) + 0x24);                              // 0x001b91a4: lw $a0, 0x24($s0)
    func_001b90e0();  // 0x1b9010                                // 0x001b91a8: jal 0x1b9010
    a1 = sp + 0x30;                                             // 0x001b91ac: addiu $a1, $sp, 0x30
    if (v0 == 0) goto label_0x1b91e4;                           // 0x001b91b0: beqz $v0, 0x1b91e4
    /* nop */                                                   // 0x001b91b4: nop 
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x001b91b8: lbu $v0, 2($s0)
    a0 = 2;                                                     // 0x001b91bc: addiu $a0, $zero, 2
    a3 = sp + 0x30;                                             // 0x001b91c4: addiu $a3, $sp, 0x30
    t0 = 1;                                                     // 0x001b91c8: addiu $t0, $zero, 1
    func_001b8c20();  // 0x1b8b40                                // 0x001b91d4: jal 0x1b8b40
    a1 = v0 + 1;                                                // 0x001b91d8: addiu $a1, $v0, 1
    goto label_0x1b9208;                                        // 0x001b91dc: b 0x1b9208
    /* nop */                                                   // 0x001b91e0: nop 
label_0x1b91e4:
    v0 = *(uint8_t*)((s0) + 2);                                 // 0x001b91e4: lbu $v0, 2($s0)
    a0 = 2;                                                     // 0x001b91e8: addiu $a0, $zero, 2
    t0 = 1;                                                     // 0x001b91f4: addiu $t0, $zero, 1
    func_001b8c20();  // 0x1b8b40                                // 0x001b9200: jal 0x1b8b40
    a1 = v0 + 1;                                                // 0x001b9204: addiu $a1, $v0, 1
label_0x1b9208:
    s1 = s1 + 1;                                                // 0x001b9208: addiu $s1, $s1, 1
label_0x1b920c:
    v0 = (s1 < 4) ? 1 : 0;                                      // 0x001b920c: slti $v0, $s1, 4
    if (v0 != 0) goto label_0x1b90f8;                           // 0x001b9210: bnez $v0, 0x1b90f8
    v1 = s1 << 4;                                               // 0x001b9214: sll $v1, $s1, 4
    a0 = 0x39 << 16;                                            // 0x001b9218: lui $a0, 0x39
    a0 = a0 + 0x4fe0;                                           // 0x001b9220: addiu $a0, $a0, 0x4fe0
    func_00107d30();  // 0x107c70                                // 0x001b9224: jal 0x107c70
    a2 = 0xf0;                                                  // 0x001b9228: addiu $a2, $zero, 0xf0
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001b9230: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9234: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9238: jr $ra
    sp = sp + 0x40;                                             // 0x001b923c: addiu $sp, $sp, 0x40
}