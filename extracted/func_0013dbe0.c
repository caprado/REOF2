void func_0013dbe0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    t0 = 0x20 << 16;                                            // 0x0013dbe0: lui $t0, 0x20
    a1 = g_00207a38;  // Global at 0x00207a38                   // 0x0013dbe8: lw $a1, 0x7a38($t0)
    if (a1 <= 0) goto label_0x13dc34;                           // 0x0013dbec: blez $a1, 0x13dc34
    v0 = 0x20 << 16;                                            // 0x0013dbf4: lui $v0, 0x20
    a0 = v0 + 0x7a80;                                           // 0x0013dbf8: addiu $a0, $v0, 0x7a80
    v1 = g_00207a80;  // Global at 0x00207a80                   // 0x0013dbfc: lb $v1, 0($a0)
    if (v1 == 0) goto label_0x13dc34;                           // 0x0013dc00: beqz $v1, 0x13dc34
label_0x13dc10:
    a2 = a2 + 1;                                                // 0x0013dc10: addiu $a2, $a2, 1
    a1 = a1 + 0x18;                                             // 0x0013dc14: addiu $a1, $a1, 0x18
    v0 = (a2 < a3) ? 1 : 0;                                     // 0x0013dc18: slt $v0, $a2, $a3
    if (v0 == 0) goto label_0x13dc34;                           // 0x0013dc1c: beqz $v0, 0x13dc34
    v1 = v1 + 0x18;                                             // 0x0013dc20: addiu $v1, $v1, 0x18
    v0 = *(int8_t*)(a1);                                        // 0x0013dc24: lb $v0, 0($a1)
    /* nop */                                                   // 0x0013dc28: nop 
    if (v0 != 0) goto label_0x13dc10;                           // 0x0013dc2c: bnez $v0, 0x13dc10
label_0x13dc34:
    v1 = g_00207a38;  // Global at 0x00207a38                   // 0x0013dc34: lw $v1, 0x7a38($t0)
    if (a2 == v1) goto label_0x13dc4c;                          // 0x0013dc38: beq $a2, $v1, 0x13dc4c
    v1 = 1;                                                     // 0x0013dc40: addiu $v1, $zero, 1
    g_00207a80 = v1;  // Global at 0x00207a80                   // 0x0013dc48: sb $v1, 0($a0)
label_0x13dc4c:
    return;                                                     // 0x0013dc4c: jr $ra
    /* nop */                                                   // 0x0013dc50: nop 
}