void func_001dc4f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x001dc4f0: addiu $sp, $sp, -0x30
    v1 = 0x22 << 16;                                            // 0x001dc4f4: lui $v1, 0x22
    v0 = -1;                                                    // 0x001dc4fc: addiu $v0, $zero, -1
    a0 = g_0021fcf8;  // Global at 0x0021fcf8                   // 0x001dc508: lw $a0, -0x308($v1)
    if (a0 == v0) goto label_0x1dc58c;                          // 0x001dc50c: beq $a0, $v0, 0x1dc58c
    PollSema();  // 0x114320                                    // 0x001dc514: jal 0x114320
    /* nop */                                                   // 0x001dc518: nop 
    a0 = 0x33 << 16;                                            // 0x001dc51c: lui $a0, 0x33
    a3 = 0x33 << 16;                                            // 0x001dc520: lui $a3, 0x33
    t1 = 0x33 << 16;                                            // 0x001dc524: lui $t1, 0x33
    t3 = 0x1e << 16;                                            // 0x001dc528: lui $t3, 0x1e
    a0 = a0 + -0xa0;                                            // 0x001dc52c: addiu $a0, $a0, -0xa0
    a3 = a3 + -0x40;                                            // 0x001dc530: addiu $a3, $a3, -0x40
    t1 = t1;                                                    // 0x001dc534: addiu $t1, $t1, 0
    t3 = t3 + -0x3548;                                          // 0x001dc538: addiu $t3, $t3, -0x3548
    local_0 = 0;                                                // 0x001dc53c: sw $zero, 0($sp)
    a1 = 1;                                                     // 0x001dc540: addiu $a1, $zero, 1
    a2 = 1;                                                     // 0x001dc544: addiu $a2, $zero, 1
    t0 = 0x10;                                                  // 0x001dc548: addiu $t0, $zero, 0x10
    func_001178a0();  // 0x1176a8                                // 0x001dc54c: jal 0x1176a8
    t2 = 0x90;                                                  // 0x001dc550: addiu $t2, $zero, 0x90
    if (v0 == 0) goto label_0x1dc570;                           // 0x001dc554: beqz $v0, 0x1dc570
    a0 = 0x25 << 16;                                            // 0x001dc558: lui $a0, 0x25
    func_00116598();  // 0x116508                                // 0x001dc560: jal 0x116508
    a0 = &str_00248270;  // "sceUsbKbRead: sceSifCallRpc -> %d\n" // 0x001dc564: addiu $a0, $a0, -0x7d90
    goto label_0x1dc588;                                        // 0x001dc568: b 0x1dc588
    v0 = -2;                                                    // 0x001dc56c: addiu $v0, $zero, -2
label_0x1dc570:
    v1 = 0x33 << 16;                                            // 0x001dc570: lui $v1, 0x33
    a0 = 1;                                                     // 0x001dc574: addiu $a0, $zero, 1
    v1 = v1 + -0x140;                                           // 0x001dc578: addiu $v1, $v1, -0x140
    g_0032ff58 = s0;  // Global at 0x0032ff58                   // 0x001dc580: sw $s0, 0x98($v1)
    g_0032ff50 = a0;  // Global at 0x0032ff50                   // 0x001dc584: sw $a0, 0x90($v1)
label_0x1dc588:
label_0x1dc58c:
    return;                                                     // 0x001dc590: jr $ra
    sp = sp + 0x30;                                             // 0x001dc594: addiu $sp, $sp, 0x30
}