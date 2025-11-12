void func_00166540() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    /* nop */                                                   // 0x0016654c: nop 
label_0x166550:
    v0 = a3 << 2;                                               // 0x00166550: sll $v0, $a3, 2
    a3 = a3 + 1;                                                // 0x00166554: addiu $a3, $a3, 1
    v1 = v0 + t0;                                               // 0x00166558: addu $v1, $v0, $t0
    v0 = v0 + t1;                                               // 0x0016655c: addu $v0, $v0, $t1
    a0 = *(int32_t*)(v1);                                       // 0x00166560: lw $a0, 0($v1)
    a1 = (a3 < 8) ? 1 : 0;                                      // 0x00166564: slti $a1, $a3, 8
    *(uint32_t*)(v0) = a2;                                      // 0x00166568: sw $a2, 0($v0)
    if (a1 != 0) goto label_0x166550;                           // 0x0016656c: bnez $a1, 0x166550
    a2 = a2 + a0;                                               // 0x00166570: addu $a2, $a2, $a0
    return;                                                     // 0x00166574: jr $ra
    /* nop */                                                   // 0x00166578: nop 
}