/** @category memory/allocation @status complete @author caprado */
void func_001aef60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers

    v1 = 0x2b << 16;                                            // 0x001aef60: lui $v1, 0x2b
    a1 = 7;                                                     // 0x001aef64: addiu $a1, $zero, 7
    goto label_0x1aef84;                                        // 0x001aef68: b 0x1aef84
    v1 = v1 + -0x5708;                                          // 0x001aef6c: addiu $v1, $v1, -0x5708
label_0x1aef70:
    v0 = *(int32_t*)(v1);                                       // 0x001aef70: lw $v0, 0($v1)
    if (v0 != 0) goto label_0x1aef90;                           // 0x001aef74: bnez $v0, 0x1aef90
    /* nop */                                                   // 0x001aef78: nop
    a1 = a1 - 1;                                                // 0x001aef7c: addiu $a1, $a1, -1
    v1 = v1 - 8;                                                // 0x001aef80: addiu $v1, $v1, -8
label_0x1aef84:
    /* nop */                                                   // 0x001aef84: nop
    if (a1 >= 0) goto label_0x1aef70;                           // 0x001aef88: bgez $a1, 0x1aef70
    /* nop */                                                   // 0x001aef8c: nop
label_0x1aef90:
    v0 = *(int32_t*)((v1) + 4);                                 // 0x001aef90: lw $v0, 4($v1)
    v0 = v0 + a0;                                               // 0x001aef94: addu $v0, $v0, $a0
    *(uint32_t*)((v1) + 4) = v0;                                // 0x001aef98: sw $v0, 4($v1)
    v1 = *(int32_t*)((v1) + 4);                                 // 0x001aef9c: lw $v1, 4($v1)
    v0 = *(int32_t*)((gp) + -0x63c4);                           // 0x001aefa0: lw $v0, -0x63c4($gp)
    at = (v0 < v1) ? 1 : 0;                                     // 0x001aefa4: slt $at, $v0, $v1
    if (at == 0) goto label_0x1aefb4;                           // 0x001aefa8: beqz $at, 0x1aefb4
    /* nop */                                                   // 0x001aefac: nop
    *(uint32_t*)((gp) + -0x63c4) = v1;                          // 0x001aefb0: sw $v1, -0x63c4($gp)
label_0x1aefb4:
    goto func_0018da40;                                         // 0x001aefb4: j 0x18da40
    /* nop */                                                   // 0x001aefb8: nop
}
