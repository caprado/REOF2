void func_00141628() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00141628: addiu $sp, $sp, -0x30
    v0 = (s2 < 0x20) ? 1 : 0;                                   // 0x00141654: slti $v0, $s2, 0x20
label_0x141658:
    if (v0 == 0) goto label_0x1416a4;                           // 0x00141658: beqz $v0, 0x1416a4
    v0 = 0x25 << 16;                                            // 0x0014165c: lui $v0, 0x25
    a1 = 0xa;                                                   // 0x0014166c: addiu $a1, $zero, 0xa
    func_001104e8();  // 0x10fe58                                // 0x00141670: jal 0x10fe58
    s1 = s3 + v0;                                               // 0x00141674: addu $s1, $s3, $v0
    v0 = v0 & 0xff;                                             // 0x0014167c: andi $v0, $v0, 0xff
    a1 = 0xa;                                                   // 0x00141680: addiu $a1, $zero, 0xa
    *(uint8_t*)(s1) = v0;                                       // 0x00141684: sb $v0, 0($s1)
    func_0010fe58();  // 0x10f7c0                                // 0x00141688: jal 0x10f7c0
    if (s0 != 0) goto label_0x141658;                           // 0x00141694: bnez $s0, 0x141658
    v0 = (s2 < 0x20) ? 1 : 0;                                   // 0x00141698: slti $v0, $s2, 0x20
    *(uint8_t*)(s1) = 0;                                        // 0x0014169c: sb $zero, 0($s1)
    v0 = 0x25 << 16;                                            // 0x001416a0: lui $v0, 0x25
label_0x1416a4:
    s0 = v0 + 0x5f80;                                           // 0x001416a8: addiu $s0, $v0, 0x5f80
    func_0010af38();  // 0x10ae00                                // 0x001416ac: jal 0x10ae00
    v0 = (a1 < v1) ? 1 : 0;                                     // 0x001416c0: slt $v0, $a1, $v1
    if (v0 == 0) a1 = v1;                                       // 0x001416c4: movz $a1, $v1, $v0
    if (a1 <= 0) goto label_0x141708;                           // 0x001416c8: blez $a1, 0x141708
    /* nop */                                                   // 0x001416cc: nop 
label_0x1416d8:
    v0 = v0 + a3;                                               // 0x001416e4: addu $v0, $v0, $a3
    a0 = g_00250000;  // Global at 0x00250000                   // 0x001416f0: lbu $a0, 0($v0)
    v1 = s3 + v1;                                               // 0x001416f8: addu $v1, $s3, $v1
    v0 = (s2 < a1) ? 1 : 0;                                     // 0x001416fc: slt $v0, $s2, $a1
    if (v0 != 0) goto label_0x1416d8;                           // 0x00141700: bnez $v0, 0x1416d8
    *(uint8_t*)(v1) = a0;                                       // 0x00141704: sb $a0, 0($v1)
label_0x141708:
    v0 = s3 + v0;                                               // 0x00141714: addu $v0, $s3, $v0
    g_00250000 = 0;  // Global at 0x00250000                    // 0x0014172c: sb $zero, 0($v0)
    return;                                                     // 0x00141730: jr $ra
    sp = sp + 0x30;                                             // 0x00141734: addiu $sp, $sp, 0x30
}