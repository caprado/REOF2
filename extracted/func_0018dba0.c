/** @category graphics/memory @status complete @author caprado */
void func_0018dba0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0018dba0: addiu $sp, $sp, -0x10
    at = 0x29 << 16;                                            // 0x0018dba4: lui $at, 0x29
    v1 = 1;                                                     // 0x0018dbac: addiu $v1, $zero, 1
    a0 = g_00290370;  // Global at 0x00290370                   // 0x0018dbb0: lw $a0, 0x370($at)
    if (a0 == v1) goto label_0x18dbd8;                          // 0x0018dbb4: beq $a0, $v1, 0x18dbd8
    /* nop */                                                   // 0x0018dbb8: nop 
    v1 = 2;                                                     // 0x0018dbbc: addiu $v1, $zero, 2
    if (a0 == v1) goto label_0x18dbd8;                          // 0x0018dbc0: beq $a0, $v1, 0x18dbd8
    /* nop */                                                   // 0x0018dbc4: nop 
    if (a0 == 0) goto label_0x18dbd8;                           // 0x0018dbc8: beqz $a0, 0x18dbd8
    /* nop */                                                   // 0x0018dbcc: nop 
    goto label_0x18dc24;                                        // 0x0018dbd0: b 0x18dc24
label_0x18dbd8:
    at = 0x29 << 16;                                            // 0x0018dbd8: lui $at, 0x29
    v0 = 0x29 << 16;                                            // 0x0018dbdc: lui $v0, 0x29
    v1 = g_00290374;  // Global at 0x00290374                   // 0x0018dbe0: lw $v1, 0x374($at)
    v0 = v0 + 0x384;                                            // 0x0018dbe4: addiu $v0, $v0, 0x384
    v1 = v1 << 2;                                               // 0x0018dbe8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x0018dbec: addu $v0, $v0, $v1
    func_0018db00();  // 18db00                                // 0x0018dbf0: jal 0x18db00
    a0 = g_00290384;  // Global at 0x00290384                   // 0x0018dbf4: lw $a0, 0($v0)
    at = 0x29 << 16;                                            // 0x0018dbf8: lui $at, 0x29
    v1 = 8 << 16;                                               // 0x0018dbfc: lui $v1, 8
    g_00290378 = v0;  // Global at 0x00290378                   // 0x0018dc00: sw $v0, 0x378($at)
    at = 0x29 << 16;                                            // 0x0018dc04: lui $at, 0x29
    a0 = g_00290378;  // Global at 0x00290378                   // 0x0018dc08: lw $a0, 0x378($at)
    at = 0x29 << 16;                                            // 0x0018dc0c: lui $at, 0x29
    v1 = a0 + v1;                                               // 0x0018dc10: addu $v1, $a0, $v1
    g_00290380 = a0;  // Global at 0x00290380                   // 0x0018dc14: sw $a0, 0x380($at)
    at = 0x29 << 16;                                            // 0x0018dc18: lui $at, 0x29
    g_0029037c = v1;  // Global at 0x0029037c                   // 0x0018dc1c: sw $v1, 0x37c($at)
label_0x18dc24:
    return;                                                     // 0x0018dc24: jr $ra
    sp = sp + 0x10;                                             // 0x0018dc28: addiu $sp, $sp, 0x10
}