void func_001d3a90() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = (a0 < 0x2100) ? 1 : 0;                                 // 0x001d3a90: slti $v0, $a0, 0x2100
    if (v0 != 0) goto label_0x1d3ad0;                           // 0x001d3a94: bnez $v0, 0x1d3ad0
    at = (a0 < 0x2400) ? 1 : 0;                                 // 0x001d3a9c: slti $at, $a0, 0x2400
    if (at == 0) goto label_0x1d3acc;                           // 0x001d3aa0: beqz $at, 0x1d3acc
    /* nop */                                                   // 0x001d3aa4: nop 
    a1 = *(uint8_t*)((gp) + -0x6114);                           // 0x001d3aa8: lbu $a1, -0x6114($gp)
    v1 = a1 << 1;                                               // 0x001d3aac: sll $v1, $a1, 1
    v0 = a1 << 7;                                               // 0x001d3ab0: sll $v0, $a1, 7
    v1 = v1 + a1;                                               // 0x001d3ab4: addu $v1, $v1, $a1
    v0 = v0 + 0x1800;                                           // 0x001d3ab8: addiu $v0, $v0, 0x1800
    v1 = v1 << 4;                                               // 0x001d3abc: sll $v1, $v1, 4
    v1 = v1 + 0x2100;                                           // 0x001d3ac0: addiu $v1, $v1, 0x2100
    a0 = a0 - v1;                                               // 0x001d3ac4: subu $a0, $a0, $v1
    a0 = a0 + v0;                                               // 0x001d3ac8: addu $a0, $a0, $v0
label_0x1d3acc:
label_0x1d3ad0:
    return;                                                     // 0x001d3ad0: jr $ra
    /* nop */                                                   // 0x001d3ad4: nop 
}