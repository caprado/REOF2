void func_00182508() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x50;                                            // 0x00182508: addiu $sp, $sp, -0x50
    if (s0 == 0) goto label_0x18254c;                           // 0x00182524: beqz $s0, 0x18254c
    v0 = 0x27 << 16;                                            // 0x0018252c: lui $v0, 0x27
    v0 = v0 + 0x71c8;                                           // 0x00182534: addiu $v0, $v0, 0x71c8
    func_0010ac68();  // 10ac68                                // 0x0018253c: jal 0x10ac68
    /* bnezl $s0, 0x182560 */                                   // 0x00182544: bnezl $s0, 0x182560
    v0 = *(int8_t*)(s0);                                        // 0x00182548: lb $v0, 0($s0)
label_0x18254c:
    s3 = 0x27 << 16;                                            // 0x0018254c: lui $s3, 0x27
    s0 = g_002771c0;  // Global at 0x002771c0                   // 0x00182550: lw $s0, 0x71c0($s3)
    if (s0 == 0) goto label_0x18260c;                           // 0x00182554: beqz $s0, 0x18260c
    v0 = *(int8_t*)(s0);                                        // 0x0018255c: lb $v0, 0($s0)
    if (v0 != 0) goto label_0x18257c;                           // 0x00182560: bnez $v0, 0x18257c
    a1 = *(uint8_t*)(s0);                                       // 0x00182564: lbu $a1, 0($s0)
    goto label_0x18260c;                                        // 0x00182568: b 0x18260c
    if (v0 == 0) goto label_0x18260c;                           // 0x00182570: beqz $v0, 0x18260c
    a1 = *(uint8_t*)(s0);                                       // 0x00182578: lbu $a1, 0($s0)
label_0x18257c:
    a1 = a1 << 0x18;                                            // 0x0018257c: sll $a1, $a1, 0x18
    s0 = s0 + 1;                                                // 0x00182580: addiu $s0, $s0, 1
    a1 = a1 >> 0x18;                                            // 0x00182584: sra $a1, $a1, 0x18
    func_0010a990();  // 10a990                                // 0x00182588: jal 0x10a990
    /* bnezl $v0, 0x182570 */                                   // 0x00182590: bnezl $v0, 0x182570
    v0 = *(int8_t*)((s0) + -1);                                 // 0x00182594: lb $v0, -1($s0)
    v1 = *(int8_t*)((s0) + -1);                                 // 0x00182598: lb $v1, -1($s0)
    v0 = 0x22;                                                  // 0x0018259c: addiu $v0, $zero, 0x22
    if (v1 != v0) goto label_0x1825d4;                          // 0x001825a0: bne $v1, $v0, 0x1825d4
    s2 = s0 + -1;                                               // 0x001825a4: addiu $s2, $s0, -1
    s3 = 0x27 << 16;                                            // 0x001825ac: lui $s3, 0x27
    s1 = 0x23 << 16;                                            // 0x001825b0: lui $s1, 0x23
    a1 = *(int8_t*)(s0);                                        // 0x001825b4: lb $a1, 0($s0)
    a0 = s1 + -0x6090;                                          // 0x001825b8: addiu $a0, $s1, -0x6090
    func_0010a990();  // 10a990                                // 0x001825bc: jal 0x10a990
    s0 = s0 + 1;                                                // 0x001825c0: addiu $s0, $s0, 1
    /* beqzl $v0, 0x1825b8 */                                   // 0x001825c4: beqzl $v0, 0x1825b8
    a1 = *(int8_t*)(s0);                                        // 0x001825c8: lb $a1, 0($s0)
    goto label_0x1825f8;                                        // 0x001825cc: b 0x1825f8
    v0 = *(int8_t*)((s0) + -1);                                 // 0x001825d0: lb $v0, -1($s0)
label_0x1825d4:
    s3 = 0x27 << 16;                                            // 0x001825d4: lui $s3, 0x27
    a1 = *(int8_t*)(s0);                                        // 0x001825d8: lb $a1, 0($s0)
    /* nop */                                                   // 0x001825dc: nop 
    func_0010a990();  // 10a990                                // 0x001825e4: jal 0x10a990
    s0 = s0 + 1;                                                // 0x001825e8: addiu $s0, $s0, 1
    /* beqzl $v0, 0x1825e0 */                                   // 0x001825ec: beqzl $v0, 0x1825e0
    a1 = *(int8_t*)(s0);                                        // 0x001825f0: lb $a1, 0($s0)
    v0 = *(int8_t*)((s0) + -1);                                 // 0x001825f4: lb $v0, -1($s0)
label_0x1825f8:
    /* beqzl $v0, 0x182604 */                                   // 0x001825f8: beqzl $v0, 0x182604
    g_002771c0 = 0;  // Global at 0x002771c0                    // 0x001825fc: sw $zero, 0x71c0($s3)
    g_002771c0 = s0;  // Global at 0x002771c0                   // 0x00182600: sw $s0, 0x71c0($s3)
    *(uint8_t*)((s0) + -1) = 0;                                 // 0x00182604: sb $zero, -1($s0)
label_0x18260c:
    return;                                                     // 0x00182620: jr $ra
    sp = sp + 0x50;                                             // 0x00182624: addiu $sp, $sp, 0x50
}