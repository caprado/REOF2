void func_00180494() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8, local_c;
    
    sp = sp + -0x10;                                            // 0x00180494: addiu $sp, $sp, -0x10
    a2 = a2 + a0;                                               // 0x0018049c: addu $a2, $a2, $a0
    a2 = a2 + v0;                                               // 0x001804a0: addu $a2, $a2, $v0
    v0 = local_0;                                               // 0x001804c4: lw $v0, 0($sp)
    if (v0 == 0) goto label_0x180554;                           // 0x001804c8: beqz $v0, 0x180554
    a3 = local_4;                                               // 0x001804cc: lw $a3, 4($sp)
    v0 = 1;                                                     // 0x001804d0: addiu $v0, $zero, 1
    if (a3 == v0) goto label_0x1804f0;                          // 0x001804d4: beq $a3, $v0, 0x1804f0
    v0 = local_8;                                               // 0x001804d8: lw $v0, 8($sp)
    v0 = 8;                                                     // 0x001804dc: addiu $v0, $zero, 8
    if (a3 == v0) goto label_0x180510;                          // 0x001804e0: beq $a3, $v0, 0x180510
    v0 = -1;                                                    // 0x001804e4: addiu $v0, $zero, -1
    goto label_0x180558;                                        // 0x001804e8: b 0x180558
    /* nop */                                                   // 0x001804ec: nop 
label_0x1804f0:
    a0 = local_c;                                               // 0x001804f0: lw $a0, 0xc($sp)
    v0 = t0 + v0;                                               // 0x001804f4: addu $v0, $t0, $v0
    v1 = *(uint8_t*)(v0);                                       // 0x001804f8: lbu $v1, 0($v0)
    v1 = v1 >> a0;                                              // 0x00180500: srav $v1, $v1, $a0
    v1 = v1 & 1;                                                // 0x00180504: andi $v1, $v1, 1
    goto label_0x180558;                                        // 0x00180508: b 0x180558
    if (v1 != 0) v0 = 0;                                        // 0x0018050c: movn $v0, $zero, $v1
label_0x180510:
    a0 = local_8;                                               // 0x00180510: lw $a0, 8($sp)
    a1 = local_c;                                               // 0x00180514: lw $a1, 0xc($sp)
    v1 = t0 + a0;                                               // 0x00180518: addu $v1, $t0, $a0
    v0 = *(uint8_t*)(v1);                                       // 0x0018051c: lbu $v0, 0($v1)
    v0 = v0 >> a1;                                              // 0x00180520: srav $v0, $v0, $a1
    if (a1 == 0) goto label_0x18054c;                           // 0x00180524: beqz $a1, 0x18054c
    a2 = v0 & 0xff;                                             // 0x00180528: andi $a2, $v0, 0xff
    v1 = a0 + 1;                                                // 0x0018052c: addiu $v1, $a0, 1
    a1 = a3 - a1;                                               // 0x00180530: subu $a1, $a3, $a1
    local_8 = v1;                                               // 0x00180534: sw $v1, 8($sp)
    a0 = t0 + v1;                                               // 0x00180538: addu $a0, $t0, $v1
    v0 = *(uint8_t*)(a0);                                       // 0x0018053c: lbu $v0, 0($a0)
    v0 = v0 << a1;                                              // 0x00180540: sllv $v0, $v0, $a1
    v0 = a2 | v0;                                               // 0x00180544: or $v0, $a2, $v0
    a2 = v0 & 0xff;                                             // 0x00180548: andi $a2, $v0, 0xff
label_0x18054c:
    goto label_0x180558;                                        // 0x0018054c: b 0x180558
label_0x180554:
    v0 = -1;                                                    // 0x00180554: addiu $v0, $zero, -1
label_0x180558:
    return;                                                     // 0x00180558: jr $ra
    sp = sp + 0x10;                                             // 0x0018055c: addiu $sp, $sp, 0x10
}