void func_0013bcc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013bcc8: addiu $sp, $sp, -0x30
    func_0010ae00();  // 10ae00                                // 0x0013bce4: jal 0x10ae00
    func_0010ae00();  // 10ae00                                // 0x0013bcf0: jal 0x10ae00
    if (s1 == v0) goto label_0x13bd08;                          // 0x0013bcf8: beq $s1, $v0, 0x13bd08
    /* nop */                                                   // 0x0013bcfc: nop 
label_0x13bd00:
    goto label_0x13bd40;                                        // 0x0013bd00: b 0x13bd40
    v0 = -1;                                                    // 0x0013bd04: addiu $v0, $zero, -1
label_0x13bd08:
    if (s1 <= 0) goto label_0x13bd3c;                           // 0x0013bd08: blez $s1, 0x13bd3c
    v1 = s2 + s0;                                               // 0x0013bd10: addu $v1, $s2, $s0
    /* nop */                                                   // 0x0013bd14: nop 
label_0x13bd18:
    v0 = s3 + s0;                                               // 0x0013bd18: addu $v0, $s3, $s0
    a1 = *(int8_t*)(v1);                                        // 0x0013bd1c: lb $a1, 0($v1)
    s0 = s0 + 1;                                                // 0x0013bd20: addiu $s0, $s0, 1
    func_0013bc70();  // 13bc70                                // 0x0013bd24: jal 0x13bc70
    a0 = *(int8_t*)(v0);                                        // 0x0013bd28: lb $a0, 0($v0)
    if (v0 != 0) goto label_0x13bd00;                           // 0x0013bd2c: bnez $v0, 0x13bd00
    v1 = (s0 < s1) ? 1 : 0;                                     // 0x0013bd30: slt $v1, $s0, $s1
    if (v1 != 0) goto label_0x13bd18;                           // 0x0013bd34: bnez $v1, 0x13bd18
    v1 = s2 + s0;                                               // 0x0013bd38: addu $v1, $s2, $s0
label_0x13bd3c:
label_0x13bd40:
    return;                                                     // 0x0013bd54: jr $ra
    sp = sp + 0x30;                                             // 0x0013bd58: addiu $sp, $sp, 0x30
}