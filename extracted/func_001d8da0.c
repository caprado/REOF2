void func_001d8da0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001d8da0: addiu $sp, $sp, -0x10
    at = 0x31 << 16;                                            // 0x001d8da4: lui $at, 0x31
    v1 = g_003137b7;  // Global at 0x003137b7                   // 0x001d8dac: lb $v1, 0x37b7($at)
    if (v1 != 0) goto label_0x1d8df0;                           // 0x001d8db0: bnez $v1, 0x1d8df0
    /* nop */                                                   // 0x001d8db4: nop 
    v0 = a2 & 0xff;                                             // 0x001d8db8: andi $v0, $a2, 0xff
    a0 = a0 & 0xff;                                             // 0x001d8dbc: andi $a0, $a0, 0xff
    a2 = *(uint8_t*)((gp) + -0x6114);                           // 0x001d8dc0: lbu $a2, -0x6114($gp)
    v1 = a1 & 0xff;                                             // 0x001d8dc4: andi $v1, $a1, 0xff
    a0 = a0 << 0x10;                                            // 0x001d8dc8: sll $a0, $a0, 0x10
    v1 = v1 << 8;                                               // 0x001d8dcc: sll $v1, $v1, 8
    v1 = a0 | v1;                                               // 0x001d8dd0: or $v1, $a0, $v1
    a0 = v0 | v1;                                               // 0x001d8dd4: or $a0, $v0, $v1
    v0 = a2 ^ 1;                                                // 0x001d8dd8: xori $v0, $a2, 1
    *(uint8_t*)((gp) + -0x6114) = v0;                           // 0x001d8ddc: sb $v0, -0x6114($gp)
    v0 = *(uint8_t*)((gp) + -0x6114);                           // 0x001d8de0: lbu $v0, -0x6114($gp)
    v0 = v0 << 7;                                               // 0x001d8de4: sll $v0, $v0, 7
    func_001d4ab0();  // 1d4ab0                                // 0x001d8de8: jal 0x1d4ab0
    a1 = v0 + 0x1800;                                           // 0x001d8dec: addiu $a1, $v0, 0x1800
label_0x1d8df0:
    return;                                                     // 0x001d8df4: jr $ra
    sp = sp + 0x10;                                             // 0x001d8df8: addiu $sp, $sp, 0x10
}