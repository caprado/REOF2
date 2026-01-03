void func_0013a040() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013a040: addiu $sp, $sp, -0x30
    func_0010ae00();  // 10ae00                                // 0x0013a05c: jal 0x10ae00
    func_0010ae00();  // 10ae00                                // 0x0013a068: jal 0x10ae00
    if (s1 == v0) goto label_0x13a080;                          // 0x0013a070: beq $s1, $v0, 0x13a080
    /* nop */                                                   // 0x0013a074: nop 
label_0x13a078:
    goto label_0x13a0b8;                                        // 0x0013a078: b 0x13a0b8
    v0 = -1;                                                    // 0x0013a07c: addiu $v0, $zero, -1
label_0x13a080:
    if (s1 <= 0) goto label_0x13a0b4;                           // 0x0013a080: blez $s1, 0x13a0b4
    v1 = s2 + s0;                                               // 0x0013a088: addu $v1, $s2, $s0
    /* nop */                                                   // 0x0013a08c: nop 
label_0x13a090:
    v0 = s3 + s0;                                               // 0x0013a090: addu $v0, $s3, $s0
    a1 = *(int8_t*)(v1);                                        // 0x0013a094: lb $a1, 0($v1)
    s0 = s0 + 1;                                                // 0x0013a098: addiu $s0, $s0, 1
    func_00139fe8();  // 139fe8                                // 0x0013a09c: jal 0x139fe8
    a0 = *(int8_t*)(v0);                                        // 0x0013a0a0: lb $a0, 0($v0)
    if (v0 != 0) goto label_0x13a078;                           // 0x0013a0a4: bnez $v0, 0x13a078
    v1 = (s0 < s1) ? 1 : 0;                                     // 0x0013a0a8: slt $v1, $s0, $s1
    if (v1 != 0) goto label_0x13a090;                           // 0x0013a0ac: bnez $v1, 0x13a090
    v1 = s2 + s0;                                               // 0x0013a0b0: addu $v1, $s2, $s0
label_0x13a0b4:
label_0x13a0b8:
    return;                                                     // 0x0013a0cc: jr $ra
    sp = sp + 0x30;                                             // 0x0013a0d0: addiu $sp, $sp, 0x30
}