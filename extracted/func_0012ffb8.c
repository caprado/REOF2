void func_0012ffb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t5 = 0x20 << 16;                                            // 0x0012ffb8: lui $t5, 0x20
    sp = sp + -0x10;                                            // 0x0012ffbc: addiu $sp, $sp, -0x10
    t1 = g_00200eac;  // Global at 0x00200eac                   // 0x0012ffc0: lw $t1, 0xeac($t5)
    if (t1 <= 0) goto label_0x130060;                           // 0x0012ffe0: blez $t1, 0x130060
    v0 = 0x20 << 16;                                            // 0x0012ffe8: lui $v0, 0x20
    a0 = 0x20 << 16;                                            // 0x0012ffec: lui $a0, 0x20
    a3 = v0 + 0xea8;                                            // 0x0012fff0: addiu $a3, $v0, 0xea8
    a0 = a0 + 0xec0;                                            // 0x0012fff4: addiu $a0, $a0, 0xec0
    v1 = g_00200ea8;  // Global at 0x00200ea8                   // 0x0012fff8: lw $v1, 0($a3)
    v0 = v1 << 1;                                               // 0x0012fffc: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x00130000: addu $v0, $v0, $v1
    v0 = v0 << 3;                                               // 0x00130004: sll $v0, $v0, 3
    v0 = v0 - v1;                                               // 0x00130008: subu $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x0013000c: sll $v0, $v0, 2
    s0 = v0 + a0;                                               // 0x00130010: addu $s0, $v0, $a0
    v1 = *(int8_t*)(s0);                                        // 0x00130014: lb $v1, 0($s0)
    if (v1 == 0) goto label_0x130064;                           // 0x00130018: beqz $v1, 0x130064
    v1 = g_00200eac;  // Global at 0x00200eac                   // 0x0013001c: lw $v1, 0xeac($t5)
    a1 = a1 + 1;                                                // 0x00130024: addiu $a1, $a1, 1
    v0 = (a1 < a2) ? 1 : 0;                                     // 0x00130028: slt $v0, $a1, $a2
    if (v0 == 0) goto label_0x130064;                           // 0x0013002c: beqz $v0, 0x130064
    v1 = g_00200eac;  // Global at 0x00200eac                   // 0x00130030: lw $v1, 0xeac($t5)
    v0 = g_00200ea8;  // Global at 0x00200ea8                   // 0x00130034: lw $v0, 0($a3)
    v0 = v0 + a1;                                               // 0x00130038: addu $v0, $v0, $a1
    v1 = v0 << 1;                                               // 0x0013003c: sll $v1, $v0, 1
    v1 = v1 + v0;                                               // 0x00130040: addu $v1, $v1, $v0
    v1 = v1 << 3;                                               // 0x00130044: sll $v1, $v1, 3
    v1 = v1 - v0;                                               // 0x00130048: subu $v1, $v1, $v0
    v1 = v1 << 2;                                               // 0x0013004c: sll $v1, $v1, 2
    s0 = v1 + a0;                                               // 0x00130050: addu $s0, $v1, $a0
    v0 = *(int8_t*)(s0);                                        // 0x00130054: lb $v0, 0($s0)
    /* bnezl $v0, 0x130028 */                                   // 0x00130058: bnezl $v0, 0x130028
    a1 = a1 + 1;                                                // 0x0013005c: addiu $a1, $a1, 1
label_0x130060:
    v1 = g_00200eac;  // Global at 0x00200eac                   // 0x00130060: lw $v1, 0xeac($t5)
label_0x130064:
    if (a1 == v1) goto label_0x130084;                          // 0x00130064: beq $a1, $v1, 0x130084
    func_0012fdc8();  // 12fdc8                                // 0x00130078: jal 0x12fdc8
label_0x130084:
    return;                                                     // 0x0013008c: jr $ra
    sp = sp + 0x10;                                             // 0x00130090: addiu $sp, $sp, 0x10
}