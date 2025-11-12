void func_00173fe8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = a1 << 3;                                               // 0x00173fe8: sll $v0, $a1, 3
    v1 = a0 + 0x1140;                                           // 0x00173fec: addiu $v1, $a0, 0x1140
    v0 = v0 - a1;                                               // 0x00173ff0: subu $v0, $v0, $a1
    sp = sp + -0x10;                                            // 0x00173ff4: addiu $sp, $sp, -0x10
    v0 = v0 << 2;                                               // 0x00173ff8: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00174000: addu $v0, $v0, $a1
    a0 = -1;                                                    // 0x00174004: addiu $a0, $zero, -1
    v0 = v0 << 2;                                               // 0x00174008: sll $v0, $v0, 2
    *(uint32_t*)(a3) = a0;                                      // 0x0017400c: sw $a0, 0($a3)
    v1 = v1 + v0;                                               // 0x00174010: addu $v1, $v1, $v0
    a0 = v1 + 0x38;                                             // 0x00174018: addiu $a0, $v1, 0x38
    v1 = v1 + 0x10;                                             // 0x0017401c: addiu $v1, $v1, 0x10
    a1 = *(int32_t*)(a0);                                       // 0x00174020: lw $a1, 0($a0)
    t0 = *(int32_t*)((v1) + 0xc);                               // 0x00174028: lw $t0, 0xc($v1)
    if (a1 == 0) goto label_0x174050;                           // 0x00174030: beqz $a1, 0x174050
    a3 = *(int32_t*)((v1) + 8);                                 // 0x00174034: lw $a3, 8($v1)
    v0 = a3 + t0;                                               // 0x00174038: addu $v0, $a3, $t0
    a1 = t1 - t0;                                               // 0x0017403c: subu $a1, $t1, $t0
    v0 = ((unsigned)t1 < (unsigned)v0) ? 1 : 0;                 // 0x00174040: sltu $v0, $t1, $v0
    func_00174108();  // 0x174060                                // 0x00174044: jal 0x174060
    if (v0 != 0) a1 = t1;                                       // 0x00174048: movn $a1, $t1, $v0
label_0x174050:
    return;                                                     // 0x00174054: jr $ra
    sp = sp + 0x10;                                             // 0x00174058: addiu $sp, $sp, 0x10
}