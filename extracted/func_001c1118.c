void func_001c1118() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x20;                                            // 0x001c1118: addiu $sp, $sp, -0x20
    func_001c0f60();  // 0x1c0f20                                // 0x001c1120: jal 0x1c0f20
    /* nop */                                                   // 0x001c1124: nop 
    if (v0 == 0) goto label_0x1c1138;                           // 0x001c1128: beqz $v0, 0x1c1138
    v0 = 0x22 << 16;                                            // 0x001c112c: lui $v0, 0x22
    goto label_0x1c1174;                                        // 0x001c1130: b 0x1c1174
    v0 = g_0021d096;  // Global at 0x0021d096                   // 0x001c1134: lbu $v0, -0x2f6a($v0)
label_0x1c1138:
    FlushCache();  // 0x114390                                  // 0x001c1138: jal 0x114390
    v0 = local_0;                                               // 0x001c1140: lw $v0, 0($sp)
    v0 = (unsigned)v0 >> 0xd;                                   // 0x001c1144: srl $v0, $v0, 0xd
    v0 = v0 & 7;                                                // 0x001c1148: andi $v0, $v0, 7
    if (v0 != 0) goto label_0x1c115c;                           // 0x001c114c: bnez $v0, 0x1c115c
    a0 = sp | 4;                                                // 0x001c1150: ori $a0, $sp, 4
    goto label_0x1c1174;                                        // 0x001c1154: b 0x1c1174
label_0x1c115c:
    a1 = 1;                                                     // 0x001c115c: addiu $a1, $zero, 1
    GsPutIMR();  // 0x1145f0                                    // 0x001c1160: jal 0x1145f0
    a2 = 1;                                                     // 0x001c1164: addiu $a2, $zero, 1
    v1 = local_4;                                               // 0x001c1168: lbu $v1, 4($sp)
    v1 = (unsigned)v1 >> 4;                                     // 0x001c116c: srl $v1, $v1, 4
    v0 = v1 & 1;                                                // 0x001c1170: andi $v0, $v1, 1
label_0x1c1174:
    return;                                                     // 0x001c1178: jr $ra
    sp = sp + 0x20;                                             // 0x001c117c: addiu $sp, $sp, 0x20
}