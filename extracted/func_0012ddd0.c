void func_0012ddd0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012ddd0: addiu $sp, $sp, -0x10
    a0 = 0x20 << 16;                                            // 0x0012ddd4: lui $a0, 0x20
    a0 = a0 + 0x4e0;                                            // 0x0012dde0: addiu $a0, $a0, 0x4e0
    a2 = 0xc0;                                                  // 0x0012dde4: addiu $a2, $zero, 0xc0
    return func_00107d30();  // Tail call                        // 0x0012ddec: j 0x107c70
    sp = sp + 0x10;                                             // 0x0012ddf0: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0012ddf4: nop 
    v1 = 0x20 << 16;                                            // 0x0012ddf8: lui $v1, 0x20
    v1 = v1 + 0x4e0;                                            // 0x0012ddfc: addiu $v1, $v1, 0x4e0
    v0 = g_002004e0;  // Global at 0x002004e0                   // 0x0012de00: lb $v0, 0($v1)
    if (v0 == 0) goto label_0x12de48;                           // 0x0012de04: beqz $v0, 0x12de48
    /* nop */                                                   // 0x0012de14: nop 
label_0x12de18:
    a3 = a3 + 1;                                                // 0x0012de18: addiu $a3, $a3, 1
    a2 = a2 + 0xc;                                              // 0x0012de1c: addiu $a2, $a2, 0xc
    a0 = (a3 < 0x10) ? 1 : 0;                                   // 0x0012de20: slti $a0, $a3, 0x10
    if (a0 == 0) goto label_0x12de4c;                           // 0x0012de24: beqz $a0, 0x12de4c
    a1 = a1 + 0xc;                                              // 0x0012de28: addiu $a1, $a1, 0xc
    v0 = *(int8_t*)(a2);                                        // 0x0012de2c: lb $v0, 0($a2)
    /* nop */                                                   // 0x0012de30: nop 
    if (v0 != 0) goto label_0x12de18;                           // 0x0012de34: bnez $v0, 0x12de18
    goto label_0x12de50;                                        // 0x0012de3c: b 0x12de50
    /* nop */                                                   // 0x0012de44: nop 
label_0x12de48:
    a0 = 1;                                                     // 0x0012de48: addiu $a0, $zero, 1
label_0x12de4c:
label_0x12de50:
    return;                                                     // 0x0012de50: jr $ra
    if (a0 != 0) v0 = v1;                                       // 0x0012de54: movn $v0, $v1, $a0
}