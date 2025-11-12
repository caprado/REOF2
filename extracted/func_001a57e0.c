void func_001a57e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a0 = a0 + -1;                                               // 0x001a57e0: addiu $a0, $a0, -1
    goto label_0x1a5804;                                        // 0x001a57e4: b 0x1a5804
label_0x1a57ec:
    v1 = a3 << 2;                                               // 0x001a57ec: sll $v1, $a3, 2
    a2 = a2 << 2;                                               // 0x001a57f0: sll $a2, $a2, 2
    v1 = a1 + v1;                                               // 0x001a57f4: addu $v1, $a1, $v1
    a2 = a1 + a2;                                               // 0x001a57f8: addu $a2, $a1, $a2
    a3 = a3 + 1;                                                // 0x001a57fc: addiu $a3, $a3, 1
    *(uint32_t*)(v1) = a2;                                      // 0x001a5800: sw $a2, 0($v1)
label_0x1a5804:
    v1 = (a3 < a0) ? 1 : 0;                                     // 0x001a5804: slt $v1, $a3, $a0
    if (v1 != 0) goto label_0x1a57ec;                           // 0x001a5808: bnez $v1, 0x1a57ec
    a2 = a3 + 1;                                                // 0x001a580c: addiu $a2, $a3, 1
    v1 = a3 << 2;                                               // 0x001a5810: sll $v1, $a3, 2
    v1 = a1 + v1;                                               // 0x001a5814: addu $v1, $a1, $v1
    return;                                                     // 0x001a5818: jr $ra
    *(uint32_t*)(v1) = 0;                                       // 0x001a581c: sw $zero, 0($v1)
}