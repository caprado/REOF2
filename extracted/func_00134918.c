void func_00134918() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00134918: addiu $sp, $sp, -0x10
    if (s0 != 0) goto label_0x134948;                           // 0x00134924: bnez $s0, 0x134948
    a0 = 0x22 << 16;                                            // 0x0013492c: lui $a0, 0x22
    a0 = &str_00223fc8;  // "\nCVFS/PS2EE Ver.2.34 Build:Jul 28 2003 17:50:08\n" // 0x00134938: addiu $a0, $a0, 0x3fc8
    return func_00127de8();  // Tail call                        // 0x0013493c: j 0x127d90
    sp = sp + 0x10;                                             // 0x00134940: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134944: nop 
label_0x134948:
    v1 = *(int8_t*)((s0) + 1);                                  // 0x00134948: lb $v1, 1($s0)
    v0 = 3;                                                     // 0x0013494c: addiu $v0, $zero, 3
    if (v1 != v0) goto label_0x134968;                          // 0x00134950: bne $v1, $v0, 0x134968
    v0 = 1;                                                     // 0x00134954: addiu $v0, $zero, 1
    func_001341f0();  // 1341f0                                // 0x00134958: jal 0x1341f0
    /* nop */                                                   // 0x0013495c: nop 
    goto label_0x1349c0;                                        // 0x00134960: b 0x1349c0
    /* nop */                                                   // 0x00134964: nop 
label_0x134968:
    if (v1 != v0) goto label_0x134980;                          // 0x00134968: bne $v1, $v0, 0x134980
    v0 = 2;                                                     // 0x0013496c: addiu $v0, $zero, 2
    func_00133ca0();  // 133ca0                                // 0x00134970: jal 0x133ca0
    /* nop */                                                   // 0x00134974: nop 
    goto label_0x1349c0;                                        // 0x00134978: b 0x1349c0
    /* nop */                                                   // 0x0013497c: nop 
label_0x134980:
    if (v1 != v0) goto label_0x134998;                          // 0x00134980: bne $v1, $v0, 0x134998
    v0 = 4;                                                     // 0x00134984: addiu $v0, $zero, 4
    func_00134078();  // 134078                                // 0x00134988: jal 0x134078
    /* nop */                                                   // 0x0013498c: nop 
    goto label_0x1349c0;                                        // 0x00134990: b 0x1349c0
    /* nop */                                                   // 0x00134994: nop 
label_0x134998:
    if (v1 != v0) goto label_0x1349b0;                          // 0x00134998: bne $v1, $v0, 0x1349b0
    v0 = 5;                                                     // 0x0013499c: addiu $v0, $zero, 5
    func_001342b0();  // 1342b0                                // 0x001349a0: jal 0x1342b0
    /* nop */                                                   // 0x001349a4: nop 
    goto label_0x1349c0;                                        // 0x001349a8: b 0x1349c0
    /* nop */                                                   // 0x001349ac: nop 
label_0x1349b0:
    if (v1 != v0) goto label_0x1349c0;                          // 0x001349b0: bne $v1, $v0, 0x1349c0
    /* nop */                                                   // 0x001349b4: nop 
    func_001344b8();  // 1344b8                                // 0x001349b8: jal 0x1344b8
    /* nop */                                                   // 0x001349bc: nop 
label_0x1349c0:
    func_00134880();  // 134880                                // 0x001349c0: jal 0x134880
    return func_00134880();  // Tail call                        // 0x001349d4: j 0x134800
    sp = sp + 0x10;                                             // 0x001349d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001349dc: nop 
    sp = sp + -0x10;                                            // 0x001349e0: addiu $sp, $sp, -0x10
    if (v1 == 0) goto label_0x134a40;                           // 0x001349ec: beqz $v1, 0x134a40
    v0 = *(int32_t*)((v1) + 8);                                 // 0x001349f4: lw $v0, 8($v1)
    if (v0 != 0) goto label_0x134a30;                           // 0x001349f8: bnez $v0, 0x134a30
    a0 = *(int32_t*)((v1) + 0x94);                              // 0x00134a00: lw $a0, 0x94($v1)
    if (a0 == 0) goto label_0x134a40;                           // 0x00134a04: beqz $a0, 0x134a40
    v0 = g_00223ff0;  // Global at 0x00223ff0                   // 0x00134a0c: lw $v0, 0x28($a0)
    if (v0 == 0) goto label_0x134a28;                           // 0x00134a10: beqz $v0, 0x134a28
    return func_00130ca0();  // Tail call                       // 0x00134a1c: j 0x130ca0
    sp = sp + 0x10;                                             // 0x00134a20: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134a24: nop 
label_0x134a28:
    goto label_0x134a40;                                        // 0x00134a28: b 0x134a40
label_0x134a30:
    return func_00130ca0();  // Tail call                       // 0x00134a34: j 0x130ca0
    sp = sp + 0x10;                                             // 0x00134a38: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00134a3c: nop 
label_0x134a40:
    return;                                                     // 0x00134a44: jr $ra
    sp = sp + 0x10;                                             // 0x00134a48: addiu $sp, $sp, 0x10
}