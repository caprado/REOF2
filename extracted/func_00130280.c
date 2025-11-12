void func_00130280() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 0xb;                                             // 0x00130284: sll $v0, $a1, 0xb
    a2 = *(int32_t*)((a3) + 0x10);                              // 0x00130288: lw $a2, 0x10($a3)
    *(uint32_t*)((a3) + 0x54) = a1;                             // 0x0013028c: sw $a1, 0x54($a3)
    a0 = a2 + 0x7ff;                                            // 0x00130290: addiu $a0, $a2, 0x7ff
    v1 = (a2 < 0) ? 1 : 0;                                      // 0x00130294: slti $v1, $a2, 0
    v0 = (a2 < v0) ? 1 : 0;                                     // 0x0013029c: slt $v0, $a2, $v0
    if (v0 == 0) goto label_0x1302c0;                           // 0x001302a0: beqz $v0, 0x1302c0
    if (v1 != 0) a1 = a0;                                       // 0x001302a4: movn $a1, $a0, $v1
    v1 = a1 >> 0xb;                                             // 0x001302a8: sra $v1, $a1, 0xb
    v0 = v1 << 0xb;                                             // 0x001302ac: sll $v0, $v1, 0xb
    v0 = a2 - v0;                                               // 0x001302b0: subu $v0, $a2, $v0
    v0 = (0 < v0) ? 1 : 0;                                      // 0x001302b4: slt $v0, $zero, $v0
    v1 = v1 + v0;                                               // 0x001302b8: addu $v1, $v1, $v0
    *(uint32_t*)((a3) + 0x54) = v1;                             // 0x001302bc: sw $v1, 0x54($a3)
label_0x1302c0:
    return;                                                     // 0x001302c0: jr $ra
    v0 = *(int32_t*)((a3) + 0x54);                              // 0x001302c4: lw $v0, 0x54($a3)
}