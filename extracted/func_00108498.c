void func_00108498() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00108498: addiu $sp, $sp, -0x30
    v0 = s1 & 3;                                                // 0x001084a4: andi $v0, $s1, 3
    if (v0 == 0) goto label_0x1084e0;                           // 0x001084bc: beqz $v0, 0x1084e0
    v0 = v0 << 2;                                               // 0x001084c4: sll $v0, $v0, 2
    a2 = 0x22 << 16;                                            // 0x001084c8: lui $a2, 0x22
    a2 = a2 + v0;                                               // 0x001084cc: addu $a2, $a2, $v0
    a2 = g_00220194;  // Global at 0x00220194                   // 0x001084d0: lw $a2, 0x194($a2)
    func_00107fe0();  // 0x107ed8                                // 0x001084d4: jal 0x107ed8
label_0x1084e0:
    s1 = s1 >> 2;                                               // 0x001084e0: sra $s1, $s1, 2
    if (s1 == 0) goto label_0x108578;                           // 0x001084e4: beqz $s1, 0x108578
    s0 = *(int32_t*)((s3) + 0x48);                              // 0x001084ec: lw $s0, 0x48($s3)
    if (s0 != 0) goto label_0x108544;                           // 0x001084f0: bnez $s0, 0x108544
    v0 = s1 & 1;                                                // 0x001084f4: andi $v0, $s1, 1
    func_00108288();  // 0x108250                                // 0x001084fc: jal 0x108250
    a1 = 0x271;                                                 // 0x00108500: addiu $a1, $zero, 0x271
    *(uint32_t*)((s3) + 0x48) = v0;                             // 0x00108508: sw $v0, 0x48($s3)
    goto label_0x108540;                                        // 0x0010850c: b 0x108540
    *(uint32_t*)(s0) = 0;                                       // 0x00108510: sw $zero, 0($s0)
    /* nop */                                                   // 0x00108514: nop 
    /* bnezl $v1, 0x108540 */                                   // 0x00108518: bnezl $v1, 0x108540
    func_00108498();  // 0x108288                                // 0x00108528: jal 0x108288
    *(uint32_t*)(s0) = v0;                                      // 0x00108534: sw $v0, 0($s0)
    *(uint32_t*)(v1) = 0;                                       // 0x00108538: sw $zero, 0($v1)
label_0x108540:
    v0 = s1 & 1;                                                // 0x00108540: andi $v0, $s1, 1
label_0x108544:
    if (v0 == 0) goto label_0x10856c;                           // 0x00108544: beqz $v0, 0x10856c
    s1 = s1 >> 1;                                               // 0x00108548: sra $s1, $s1, 1
    func_00108498();  // 0x108288                                // 0x00108554: jal 0x108288
    func_00107ed8();  // 0x107ea8                                // 0x00108564: jal 0x107ea8
label_0x10856c:
    /* bnezl $s1, 0x108518 */                                   // 0x0010856c: bnezl $s1, 0x108518
    v1 = *(int32_t*)(s0);                                       // 0x00108570: lw $v1, 0($s0)
label_0x108578:
    return;                                                     // 0x0010858c: jr $ra
    sp = sp + 0x30;                                             // 0x00108590: addiu $sp, $sp, 0x30
}