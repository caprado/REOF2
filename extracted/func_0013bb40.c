void func_0013bb40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0013bb40: addiu $sp, $sp, -0x20
    func_0013bae8();  // 0x13ba78                                // 0x0013bb5c: jal 0x13ba78
    *(uint8_t*)(s1) = 0;                                        // 0x0013bb60: sb $zero, 0($s1)
    if (v0 != 0) goto label_0x13bb78;                           // 0x0013bb64: bnez $v0, 0x13bb78
    a1 = 0x20 << 16;                                            // 0x0013bb68: lui $a1, 0x20
    func_0010ae00();  // 0x10ac68                                // 0x0013bb70: jal 0x10ac68
    a1 = a1 + 0x45b0;                                           // 0x0013bb74: addiu $a1, $a1, 0x45b0
label_0x13bb78:
    func_0013bb40();  // 0x13bae8                                // 0x0013bb78: jal 0x13bae8
    v1 = 1;                                                     // 0x0013bb80: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x13bbf0;                          // 0x0013bb84: bnel $v0, $v1, 0x13bbf0
    s0 = 0x20 << 16;                                            // 0x0013bb8c: lui $s0, 0x20
    s0 = s0 + 0x44a8;                                           // 0x0013bb94: addiu $s0, $s0, 0x44a8
    func_0010a990();  // 0x10a860                                // 0x0013bb98: jal 0x10a860
    func_0010af38();  // 0x10ae00                                // 0x0013bba0: jal 0x10ae00
    a0 = 0x5c;                                                  // 0x0013bba8: addiu $a0, $zero, 0x5c
    v0 = v0 + s0;                                               // 0x0013bbac: addu $v0, $v0, $s0
    v0 = *(int8_t*)((v0) + -1);                                 // 0x0013bbb0: lb $v0, -1($v0)
    if (v0 == a0) goto label_0x13bbec;                          // 0x0013bbb4: beq $v0, $a0, 0x13bbec
    v1 = 0x2f;                                                  // 0x0013bbb8: addiu $v1, $zero, 0x2f
    if (v0 == v1) goto label_0x13bbf0;                          // 0x0013bbbc: beq $v0, $v1, 0x13bbf0
    if (v0 == 0) goto label_0x13bbf0;                           // 0x0013bbc4: beqz $v0, 0x13bbf0
    /* nop */                                                   // 0x0013bbc8: nop 
    v0 = *(int8_t*)(s2);                                        // 0x0013bbcc: lb $v0, 0($s2)
    if (v0 == a0) goto label_0x13bbf0;                          // 0x0013bbd0: beq $v0, $a0, 0x13bbf0
    /* nop */                                                   // 0x0013bbd4: nop 
    if (v0 == v1) goto label_0x13bbec;                          // 0x0013bbd8: beq $v0, $v1, 0x13bbec
    a1 = 0x22 << 16;                                            // 0x0013bbdc: lui $a1, 0x22
    func_0010a990();  // 0x10a860                                // 0x0013bbe4: jal 0x10a860
    a1 = a1 + 0x59d0;                                           // 0x0013bbe8: addiu $a1, $a1, 0x59d0
label_0x13bbec:
label_0x13bbf0:
    func_0010a990();  // 0x10a860                                // 0x0013bbf0: jal 0x10a860
    func_0010af38();  // 0x10ae00                                // 0x0013bbf8: jal 0x10ae00
    if (a2 <= 0) goto label_0x13bc3c;                           // 0x0013bc04: blez $a2, 0x13bc3c
    t0 = 0x5c;                                                  // 0x0013bc0c: addiu $t0, $zero, 0x5c
    a3 = 0x2f;                                                  // 0x0013bc10: addiu $a3, $zero, 0x2f
    a0 = s1 + a1;                                               // 0x0013bc14: addu $a0, $s1, $a1
label_0x13bc18:
    a1 = a1 + 1;                                                // 0x0013bc18: addiu $a1, $a1, 1
    v0 = *(int8_t*)(a0);                                        // 0x0013bc1c: lb $v0, 0($a0)
    if (v0 != t0) goto label_0x13bc2c;                          // 0x0013bc20: bne $v0, $t0, 0x13bc2c
    v1 = (a1 < a2) ? 1 : 0;                                     // 0x0013bc24: slt $v1, $a1, $a2
    *(uint8_t*)(a0) = a3;                                       // 0x0013bc28: sb $a3, 0($a0)
label_0x13bc2c:
    /* nop */                                                   // 0x0013bc2c: nop 
    /* nop */                                                   // 0x0013bc30: nop 
    if (v1 != 0) goto label_0x13bc18;                           // 0x0013bc34: bnez $v1, 0x13bc18
    a0 = s1 + a1;                                               // 0x0013bc38: addu $a0, $s1, $a1
label_0x13bc3c:
    return;                                                     // 0x0013bc4c: jr $ra
    sp = sp + 0x20;                                             // 0x0013bc50: addiu $sp, $sp, 0x20
}