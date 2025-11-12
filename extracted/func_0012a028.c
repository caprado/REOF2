void func_0012a028() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a028: addiu $sp, $sp, -0x10
    v0 = 0x1f << 16;                                            // 0x0012a02c: lui $v0, 0x1f
    g_001f59b0 = 0;  // Global at 0x001f59b0                    // 0x0012a034: sw $zero, 0x59b0($v0)
    return func_0012a028();  // Tail call                        // 0x0012a03c: j 0x129ea8
    sp = sp + 0x10;                                             // 0x0012a040: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012a044: nop 
    sp = sp + -0x10;                                            // 0x0012a048: addiu $sp, $sp, -0x10
    v1 = 0x1f << 16;                                            // 0x0012a04c: lui $v1, 0x1f
    v1 = v1 + 0x59b0;                                           // 0x0012a054: addiu $v1, $v1, 0x59b0
    v0 = g_001f59b0;  // Global at 0x001f59b0                   // 0x0012a05c: lw $v0, 0($v1)
    v0 = v0 + -1;                                               // 0x0012a060: addiu $v0, $v0, -1
    if (v0 != 0) goto label_0x12a108;                           // 0x0012a064: bnez $v0, 0x12a108
    g_001f59b0 = v0;  // Global at 0x001f59b0                   // 0x0012a068: sw $v0, 0($v1)
    s0 = 0x20 << 16;                                            // 0x0012a06c: lui $s0, 0x20
    s0 = s0 + 0x2a1c;                                           // 0x0012a070: addiu $s0, $s0, 0x2a1c
    func_0012c320();  // 0x12c308                                // 0x0012a074: jal 0x12c308
    g_00202a1c = 0;  // Global at 0x00202a1c                    // 0x0012a078: sw $zero, 0($s0)
    func_00128190();  // 0x1280d0                                // 0x0012a07c: jal 0x1280d0
    /* nop */                                                   // 0x0012a080: nop 
    func_0012fdc8();  // 0x12fdc0                                // 0x0012a084: jal 0x12fdc0
    /* nop */                                                   // 0x0012a088: nop 
    func_0013d398();  // 0x13d2d8                                // 0x0012a08c: jal 0x13d2d8
    /* nop */                                                   // 0x0012a090: nop 
    func_001261b8();  // 0x1261a0                                // 0x0012a094: jal 0x1261a0
    /* nop */                                                   // 0x0012a098: nop 
    a0 = 2;                                                     // 0x0012a09c: addiu $a0, $zero, 2
    func_00141918();  // 0x1418a0                                // 0x0012a0a0: jal 0x1418a0
    a1 = 1;                                                     // 0x0012a0a4: addiu $a1, $zero, 1
    v0 = 0x1f << 16;                                            // 0x0012a0a8: lui $v0, 0x1f
    a1 = g_001f59c0;  // Global at 0x001f59c0                   // 0x0012a0ac: lw $a1, 0x59c0($v0)
    func_00141918();  // 0x1418a0                                // 0x0012a0b0: jal 0x1418a0
    a0 = 4;                                                     // 0x0012a0b4: addiu $a0, $zero, 4
    v0 = 0x1f << 16;                                            // 0x0012a0b8: lui $v0, 0x1f
    a1 = g_001f59b8;  // Global at 0x001f59b8                   // 0x0012a0bc: lw $a1, 0x59b8($v0)
    func_00141918();  // 0x1418a0                                // 0x0012a0c0: jal 0x1418a0
    a0 = 5;                                                     // 0x0012a0c4: addiu $a0, $zero, 5
    func_00141e50();  // 0x141df8                                // 0x0012a0c8: jal 0x141df8
    /* nop */                                                   // 0x0012a0cc: nop 
    func_0012c660();  // 0x12c638                                // 0x0012a0d0: jal 0x12c638
    /* nop */                                                   // 0x0012a0d4: nop 
    func_00127d68();  // 0x127d30                                // 0x0012a0d8: jal 0x127d30
    /* nop */                                                   // 0x0012a0dc: nop 
    func_0013f020();  // 0x13efd0                                // 0x0012a0e0: jal 0x13efd0
    /* nop */                                                   // 0x0012a0e4: nop 
    func_0013f568();  // 0x13f518                                // 0x0012a0e8: jal 0x13f518
    /* nop */                                                   // 0x0012a0ec: nop 
    func_0013fd80();  // 0x13fd30                                // 0x0012a0f0: jal 0x13fd30
    /* nop */                                                   // 0x0012a0f4: nop 
    func_001261d0();  // 0x1261b8                                // 0x0012a0f8: jal 0x1261b8
    /* nop */                                                   // 0x0012a0fc: nop 
    v0 = 1;                                                     // 0x0012a100: addiu $v0, $zero, 1
    g_00202a1c = v0;  // Global at 0x00202a1c                   // 0x0012a104: sw $v0, 0($s0)
label_0x12a108:
    return;                                                     // 0x0012a110: jr $ra
    sp = sp + 0x10;                                             // 0x0012a114: addiu $sp, $sp, 0x10
}